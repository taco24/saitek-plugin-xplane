// Copyright (c) 2010 Joseph D Poirier
// Distributable under the terms of The New BSD License
// that can be found in the LICENSE file.

#ifndef __SAITEK_H
#define __SAITEK_H

#include "XPLMDefs.h"

#ifdef __cplusplus
extern "C" {
#endif

    PLUGIN_API int XPluginStart(char* outName, char* outSig, char* outDesc);
    PLUGIN_API void XPluginStop(void);
    PLUGIN_API void XPluginDisable(void);
    PLUGIN_API int XPluginEnable(void);

    float rpSendMsg(float inElapsedSinceLastCall,
                    float inElapsedTimeSinceLastFlightLoop,
                    int inCounter,
                    void* inRefcon);

    float rpReceiveMsg(float inElapsedSinceLastCall,
                       float inElapsedTimeSinceLastFlightLoop,
                       int inCounter,
                       void* inRefcon);

    float mpSendMsg(float inElapsedSinceLastCall,
                    float inElapsedTimeSinceLastFlightLoop,
                    int inCounter,
                    void* inRefcon);

    float mpReceiveMsg(float inElapsedSinceLastCall,
                       float inElapsedTimeSinceLastFlightLoop,
                       int inCounter,
                       void* inRefcon);

    float spSendMsg(float inElapsedSinceLastCall,
                    float inElapsedTimeSinceLastFlightLoop,
                    int inCounter,
                    void* inRefcon);

    float spReceiveMsg(float inElapsedSinceLastCall,
                       float inElapsedTimeSinceLastFlightLoop,
                       int inCounter,
                       void* inRefcon);

    void rp_hid_init();
    void mp_hid_init();
    void sp_hid_init();
    void rp_hid_close();
    void mp_hid_close();
    void sp_hid_close();

    void pc_thread_pend();
    void rp_thread_pend();
    void mp_thread_pend();
    void sp_thread_pend();
    void pc_thread_resume();
    void rp_thread_resume();
    void mp_thread_resume();
    void sp_thread_resume();


#ifdef __cplusplus
}
#endif

#endif
