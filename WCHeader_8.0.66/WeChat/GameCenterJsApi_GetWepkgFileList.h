@interface GameCenterJsApi_GetWepkgFileList : GameCenterJsApiBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)handlePkg:(id)a0 event:(id)a1 updateIfNeed:(BOOL)a2;
- (void)forceUpdateConfig:(id)a0 event:(id)a1;
- (void)onPkgUpdate:(id)a0 event:(id)a1;

@end
