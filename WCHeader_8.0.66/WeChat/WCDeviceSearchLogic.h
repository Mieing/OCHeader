@class NSString, WCDeviceBrandMgr, WCDevice, WCLanDeviceMgr, NSMutableSet, NSMutableDictionary;
@protocol WCDeviceSearchLogicDelegate;

@interface WCDeviceSearchLogic : NSObject <IWCDeviceBrandMgrExt, IWCLanDeviceMgrExt> {
    WCDeviceBrandMgr *m_manager;
    WCLanDeviceMgr *m_LanManager;
    WCDevice *m_fliterDevice;
    NSMutableSet *m_macSet;
    NSMutableDictionary *m_bleDeviceMap;
}

@property (weak, nonatomic) id<WCDeviceSearchLogicDelegate> delegate;
@property (nonatomic) unsigned long long deviceSearchType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFliterDevice:(id)a0;
- (void)dealloc;
- (void)startScan;
- (void)stopScan;
- (BOOL)fliterDevice:(id)a0;
- (BOOL)isBLEDeviceBoundWithDid:(long long)a0;
- (void)onReceiveWCLanDeviceDisc:(id)a0;
- (void)onWifiHardDeviceSearch:(id)a0 respData:(id)a1 ExtData:(id)a2;
- (void)onWCDeviceFound:(long long)a0 canHandled:(BOOL *)a1;
- (void)onBLEHardDeviceSearch:(id)a0 modContact:(id)a1 respData:(id)a2 errorCode:(int)a3;
- (void).cxx_destruct;

@end
