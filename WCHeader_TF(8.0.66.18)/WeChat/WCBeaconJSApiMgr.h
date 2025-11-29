@class CBCentralManager, NSString, MMUIViewController, NSMutableDictionary, NSMutableArray;
@protocol WXCustomWebViewControllerProtocol;

@interface WCBeaconJSApiMgr : MMUserService <ILocationMgrExt, MMServiceProtocol, PBMessageObserverDelegate, CBCentralManagerDelegate> {
    MMUIViewController<WXCustomWebViewControllerProtocol> *m_currentWebViewController;
    NSString *m_ticket;
    CBCentralManager *m_bleMgr;
    unsigned long long m_locationMgrTag;
    NSMutableArray *m_aryUUID;
    NSMutableDictionary *m_canRegionDic;
    NSMutableArray *m_hadGetBeacons;
    NSMutableArray *m_getBeaconsInfoWatingQueue;
    NSMutableArray *m_getBeaconsInfoRunningQueue;
    unsigned long long m_verifyReqResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (unsigned long long)startMonitorBeacon:(id)a0 ticket:(id)a1;
- (void)stopMonitoring;
- (void)finishCauseOf:(unsigned long long)a0;
- (void)notifyStartMonitoringFailWithErrorMsg:(id)a0;
- (void)notifyStartMonitoringFailByBLEPowerOffWithErrorMsg:(id)a0;
- (void)notifyStartMonitoringFailByRangeFailedWithErrorMsg:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)onRangingBeaconsDidFailForRegion:(id)a0 withError:(id)a1 withTag:(unsigned long long)a2;
- (void)onDidRangeBeacons:(id)a0 inRegion:(id)a1 withTag:(unsigned long long)a2;
- (void).cxx_destruct;

@end
