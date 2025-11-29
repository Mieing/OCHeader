@class NSString, NSHashTable;

@interface GameHaowanPostEventDispatcher : MMUserService <MMServiceProtocol, IGameHaowanPostMgrExt> {
    NSHashTable *_webviewControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)putWebviewController:(id)a0;
- (void)onGameHaowanPostProgress:(id)a0 percent:(float)a1;
- (void)onGameHaowanPostSucceed:(id)a0;
- (void)onGameHaowanPostFailed:(id)a0 error:(id)a1;
- (void)onGameHaowanPostCanceled:(id)a0;
- (void).cxx_destruct;

@end
