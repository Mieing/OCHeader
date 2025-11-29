@class NSString;

@interface ExtraDeviceLoginMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (nonatomic) unsigned int uiFromScene;
@property (retain, nonatomic) NSString *loginUrl;
@property (nonatomic) unsigned int extDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (unsigned int)getExtDeviceType;
- (void)handleExtraDeviceLoginUrl:(id)a0 uiFromScene:(unsigned int)a1;
- (void)showExtraDeviceLoginViewControllerWithExtInfo:(id)a0;
- (void)sendExtraDeviceLoginRequset;
- (void)onGetExtDeviceLoginResponse:(id)a0 eventID:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)sendDeviceUnlockRequest:(BOOL)a0 onlineInfo:(id)a1 scene:(int)a2 fromViewController:(id)a3 onSuccess:(id /* block */)a4 onFail:(id /* block */)a5;
- (void)sendDeviceUnlockRequest:(BOOL)a0 lockDeviceType:(unsigned int)a1 uuid:(id)a2 scene:(int)a3 fromViewController:(id)a4 onSuccess:(id /* block */)a5 onFail:(id /* block */)a6;
- (unsigned int)sendDeviceControlCGIWithIsLock:(BOOL)a0 deviceType:(unsigned int)a1 uuid:(id)a2;
- (void)onGetExtDeviceControlReponse:(id)a0 eventID:(unsigned int)a1;
- (void).cxx_destruct;

@end
