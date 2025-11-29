@class NSString;
@protocol ITingRouter;

@interface TingAppTaskManager : NSObject <IMMFontMgrExt, IMMLanguageMgrExt>

@property (retain, nonatomic) id<ITingRouter> router;
@property (nonatomic) int appDisplayMode;
@property (nonatomic) BOOL hasPendingDisplayMode;
@property (readonly, nonatomic) int enterScene;
@property (readonly, copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)service;
- (void)updateSessionWithEnterScene:(int)a0;
- (void)clearSession;
- (void)reloadRouter;
- (void)cancelDelayTeminatieApp;
- (BOOL)checkNeedDelayTerminateApp;
- (void)delayTerminateApp;
- (void)terminateAppImmediatly;
- (void)terminateAppImmediatlyWithForceDismiss:(BOOL)a0 completion:(id /* block */)a1;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onLimitedModeChanged;
- (void).cxx_destruct;

@end
