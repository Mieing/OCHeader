@class NSString, GameCenterJsService;

@interface GameCenterJsServiceMgr : MMUserService <MMServiceProtocol> {
    GameCenterJsService *_jsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearData;
- (BOOL)canCreate;
- (void)create;
- (void)stop;
- (BOOL)checkAndDestroy;
- (void)destroy;
- (BOOL)checkAndDestroyJsService;
- (id)getJsServiceState;
- (void)dispatchJsServiceState:(id)a0;
- (void)postMessageFromWebView:(id)a0 message:(id)a1;
- (void)processCallbackFromNative:(id)a0 callbackId:(id)a1;
- (void)processEventFromNative:(id)a0 event:(id)a1;
- (void).cxx_destruct;

@end
