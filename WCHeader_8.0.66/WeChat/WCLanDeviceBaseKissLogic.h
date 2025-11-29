@class NSString, WCLanDeviceData, NSMutableSet, NSMutableDictionary, WCLanDeviceMgr;
@protocol WCLanDeviceKissLogicDelegate;

@interface WCLanDeviceBaseKissLogic : NSObject <IWCLanDeviceMgrExt, PBMessageObserverDelegate> {
    NSMutableSet *m_deviceMd5Set;
    NSMutableDictionary *m_lanDeviceDict;
    NSMutableDictionary *m_reqEventMap;
    WCLanDeviceMgr *m_lanMgr;
}

@property (weak, nonatomic) id<WCLanDeviceKissLogicDelegate> delegate;
@property (nonatomic) unsigned long long deviceScene;
@property (retain, nonatomic) WCLanDeviceData *deviceData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 deviceData:(id)a1;
- (void)startScan;
- (void)stopScan;
- (void)disconnect;
- (id)devicesApplySceneAndSupportInternetKissOnly;
- (id)devicesApplyScene;
- (id)lanDeviceWithDeviceMD5:(id)a0;
- (unsigned int)popEventIdRelatedWithDevice:(id)a0;
- (BOOL)cancelTaskWithDevice:(id)a0;
- (BOOL)filterSearchLanDevice:(id)a0;
- (void)onReceiveWCLanDeviceProfile:(id)a0;
- (void)forwardData:(id)a0 toDevice:(id)a1 isThrouSever:(BOOL)a2;
- (void)sendRequest:(id)a0 Retry:(unsigned int)a1 Device:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
