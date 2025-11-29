@interface MMIAppKinda : NSObject {
    struct Handle<std::shared_ptr<kinda::IAppKinda>> { struct shared_ptr<kinda::IAppKinda> { struct IAppKinda *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

+ (id)getInstance;

- (id)initWithCpp:(const void *)a0;
- (id)startUseCase:(id)a0 data:(id)a1 callback:(id)a2;
- (void)stopUseCase:(id)a0;
- (BOOL)isInAnyUseCase;
- (id)getUseCaseInStackWithData:(id)a0 data:(id)a1;
- (id)getUseCaseInStack:(id)a0;
- (BOOL)isUseCaseAlive:(id)a0;
- (void)popToUseCase:(id)a0;
- (BOOL)getIsPaying;
- (void)notifyAllUseCases:(id)a0;
- (BOOL)checkOfflineReady;
- (void)updateOfflinePayTokenWithScene:(int)a0;
- (void)checkIfNeedUpdateOfflinePayToken;
- (void)updateOfflinePayDefaultCard:(id)a0 bankType:(id)a1;
- (void)checkIfNeedRequestUserBindqueryWhenUnBindCard:(id)a0;
- (void)notifyHKOfflineNewXml:(id)a0;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)applicationBecomeActive;
- (void)applicationResignActive;
- (void)applicationReceiveMemoryWarning:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)networkChange:(id)a0;
- (void)takeScreenshot;
- (void)applicationRestart;
- (void)notifyScreenCapture;
- (void)notifyOnManualAuthOK;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
