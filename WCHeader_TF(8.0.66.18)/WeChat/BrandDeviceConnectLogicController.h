@class NSString, CContact, NSMutableSet, NSMutableArray;
@protocol BrandDeviceConnectLogicControllerDelegate;

@interface BrandDeviceConnectLogicController : MMObject <IWCDeviceBrandMgrExt, IWCDeviceAccountMgrExt> {
    CContact *m_contact;
    int m_brandDeviceConnectedCount;
    NSMutableArray *m_devices;
    NSMutableSet *m_hasTryOnceDeviceSet;
    BOOL m_is15SScanEnd;
    BOOL m_hasLongConnetDevice;
    BOOL m_hasWifiDevice;
    BOOL m_hasEADevice;
    BOOL m_hasBLEDevice;
}

@property (weak, nonatomic) id<BrandDeviceConnectLogicControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContact:(id)a0;
- (void)willEnterForeground;
- (id)getDeviceForDid:(long long)a0;
- (void)updateBrandDevciesType;
- (void)internalStartScan:(BOOL)a0;
- (void)genConnProtoAndDoScan;
- (void)updateSubTitle;
- (void)wifiStateUpdate;
- (void)startScan;
- (void)restartScan;
- (void)stopScan;
- (void)scanTimeout;
- (void)showErrTips:(int)a0;
- (void)onWCDeviceWifiStatusUpdate:(id)a0 Status:(unsigned int)a1;
- (void)onWCDeviceFound:(long long)a0 canHandled:(BOOL *)a1;
- (void)onWCDeviceLost:(long long)a0;
- (void)onWCDeviceChannelStateChanged:(long long)a0 :(int)a1 :(int)a2;
- (void)onWCDeviceAuthEnd:(int)a0 DID:(long long)a1 isHandled:(BOOL *)a2;
- (void)onWCDeviceInitEnd:(int)a0 DID:(long long)a1 isHandled:(BOOL *)a2;
- (void)onWCDeviceBlueToothStateChanged:(int)a0;
- (void)onWCDeviceSessionTimeout:(long long)a0;
- (void)onBlueProfileConnectStateChanged:(long long)a0 State:(int)a1 ErrorCode:(int)a2;
- (void)onBlueProfilePedometerInfoUpdated:(long long)a0 Info:(id)a1;
- (void)onWCDeviceAccountUnbind:(id)a0;
- (void).cxx_destruct;

@end
