@class CBCentralManager, NSString, NSArray, NSMutableDictionary;

@interface WAJSContextPlugin_Beacon : WAJSContextPluginBase <IWABeaconMgrExt, CBCentralManagerDelegate> {
    NSArray *m_uuids;
    unsigned long long m_locationTag;
    CBCentralManager *m_bleMgr;
    NSMutableDictionary *m_beacons;
    long long m_bleState;
    BOOL m_isInStartWorkFlow;
    BOOL m_isRanging;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (int)systemSupportBeacon;
- (int)starMoritoring:(id)a0 needBLEAbilityCheck:(BOOL)a1;
- (void)startRanging;
- (void)notifyStartRangingFailed:(id)a0;
- (int)stopRanging;
- (id)getCurrentBeacons;
- (void)notifyServiceBeaconState;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)onRangingBeaconsDidFailForRegion:(id)a0 withError:(id)a1 withTag:(unsigned long long)a2;
- (void)onDidRangeBeacons:(id)a0 inRegion:(id)a1 withTag:(unsigned long long)a2;
- (id)genBeaconKey:(id)a0;
- (void).cxx_destruct;

@end
