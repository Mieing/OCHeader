@class NSString;

@interface WCDeviceAirKissMgr : MMUserService <MMServiceProtocol> {
    BOOL m_isStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)startAirKiss:(id)a0 Password:(id)a1 Key:(id)a2 ProcInt:(int)a3 DataInt:(int)a4;
- (void)stopAirKiss;
- (id)getWifiPassword:(id)a0;
- (id)getAESKey:(id)a0;
- (id)getTableKey:(id)a0;
- (BOOL)setWifi:(id)a0 Password:(id)a1;

@end
