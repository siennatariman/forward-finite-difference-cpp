//
//  main.cpp
//  forward-difference
//
//  Created by Sienna Ross Mariano Tariman on 29/01/2022.
//  Copyright © 2022 Sienna Ross Mariano Tariman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

float x, h;
float xm_2h_eqn_f, xm_h_eqn_f, xp_h_eqn_f, xp_2h_eqn_f, x_v_eqn_f, forward_final;
float xm_2h(float x, float h);
float xm_h(float x, float h);
float xp_h(float x, float h);
float xp_2h(float x, float h);
float x_fx(float x);
float forward_Difference(float fxp_2h, float fxp_h, float fx, float h);

int main() {
    // insert code here...
    
    cout << "Please input the x value: ";
    cin >> x;
    
    cout << "Please input the h value: ";
    cin >> h;
    
    cout << "x = " << x << ", h = " << h;
    
    xm_2h_eqn_f = xm_2h(x, h);
    xm_h_eqn_f = xm_h(x, h);
    xp_h_eqn_f = xp_h(x, h);
    xp_2h_eqn_f = xp_2h(x, h);
    x_v_eqn_f = x_fx(x);
    forward_final = forward_Difference(xp_2h_eqn_f, xp_h_eqn_f, x_v_eqn_f, h);
    
    
    cout << " \n";
    cout << xm_2h_eqn_f;
    cout << " \n" ;
    cout << xm_h_eqn_f;
    cout << " \n" ;
    cout << xp_h_eqn_f;
    cout << " \n" ;
    cout << xp_2h_eqn_f;
    cout << " \n" ;
    cout << x_v_eqn_f;
    cout << " \n" ;
    cout << forward_final;
    cout << " \n" ;
    
    
    return 0;
}



float xm_2h(float x, float h){
    float xm_2hv, xm_2h_eqn;
    
    xm_2hv = x - (2*h);
    xm_2h_eqn = exp(sin(xm_2hv))/(pow(xm_2hv, 3) - 10 * pow(xm_2hv, 2) + 4);
    
    return xm_2h_eqn;
    
}

float xm_h(float x, float h){
    float xm_hv, xm_h_eqn;
    
    xm_hv = x - h;
    xm_h_eqn = exp(sin(xm_hv))/(pow(xm_hv, 3) - 10 * pow(xm_hv, 2) + 4);
    
    return xm_h_eqn;
}

float xp_h(float x, float h){
    float xp_hv, xp_h_eqn;
    
    xp_hv = x + h;
    xp_h_eqn = exp(sin(xp_hv))/(pow(xp_hv, 3) - 10 * pow(xp_hv, 2) + 4);
    
    return xp_h_eqn;
}

float xp_2h(float x, float h){
    float xp_2hv, xp_2h_eqn;
    
    xp_2hv = x + (2*h);
    xp_2h_eqn = exp(sin(xp_2hv))/(pow(xp_2hv, 3) - 10 * pow(xp_2hv, 2) + 4);
    
    return xp_2h_eqn;
}

float x_fx(float x){
    float x_v,x_v_eqn;
    x_v = x;
    
    x_v_eqn = exp(sin(x_v))/(pow(x_v, 3) - 10 * pow(x_v, 2) + 4);
    
    return x_v_eqn;
}

float forward_Difference(float fxp_2h, float fxp_h, float fx, float h){
    float forward_f;
    
    forward_f = (-fxp_2h + 4*fxp_h - 3*fx)/(2*h);

    return forward_f;
}

