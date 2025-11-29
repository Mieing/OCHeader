@class NSObject, NSMutableDictionary, NEHotspotConfigurationManager, NEHotspotHelperCommand, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WAJSContextPlugin_WiFi : WAJSContextPluginBase {
    BOOL m_registed;
    BOOL m_hasPreSet;
    NSMutableDictionary *m_wifiInfoMap;
    NEHotspotHelperCommand *m_retainScanListCommand;
    NEHotspotHelperCommand *m_retainEvaluateCommand;
    NEHotspotHelperCommand *m_retainMantainCommand;
    NSMutableArray *m_scanWiFiList;
    NSObject<OS_dispatch_queue> *m_timerQueue;
    NSObject<OS_dispatch_source> *m_deliverTimer;
    NEHotspotConfigurationManager *m_configMgr;
}

+ (long long)convertStringToNEConfidence:(id)a0;

- (id)init;
- (void)registerWifiHandler;
- (void)unregisterWifiHandler;
- (BOOL)canHandleWifiList;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (BOOL)setWifiListInfo:(id)a0;
- (void)preSetWifiListInfo:(id)a0;
- (id)wifiInfoWithSSID:(id)a0 BSSID:(id)a1;
- (id)connectedWiFi;
- (void)evalueteWiFiWithSSID:(id)a0 BSSID:(id)a1 confidence:(id)a2;
- (void)connectToWifiWithSSID:(id)a0 password:(id)a1 isWEP:(BOOL)a2;
- (void)handleHotspotWiFiCommand:(id)a0;
- (void)handleCommandForFilterScanList:(id)a0;
- (void)handleCommandForEvaluate:(id)a0;
- (void)handleCommandForAuthenticate:(id)a0;
- (void)handleCommandForPresentUI:(id)a0;
- (void)handleCommandForMaintain:(id)a0;
- (void)handleCommandForLogoff:(id)a0;
- (void)setDeliverTimeoutTimer;
- (void)cancelDeliverTimeoutTimer;
- (void)onDeliverNetworkCommandWhenTimeout;
- (void)deliverNetworkCommand:(id)a0;
- (void).cxx_destruct;

@end
