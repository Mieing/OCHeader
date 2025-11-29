@class ADFeelGoodConfig, UIWindow, ADFeelGoodViewController;

@interface ADFeelGoodManager : NSObject

@property (retain, nonatomic) ADFeelGoodConfig *config;
@property (weak, nonatomic) ADFeelGoodViewController *currentVC;
@property (retain, nonatomic) UIWindow *globalWindow;

+ (id)sharedInstance;

- (id)createWebViewWithLoadFinish:(id /* block */)a0 loadFailed:(id /* block */)a1 closeCallback:(id /* block */)a2 containerHeightCallback:(id /* block */)a3 onMessageCallback:(id /* block */)a4;
- (void)checkQuestionnaireWithEventID:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)openWithOpenModel:(id)a0 infoModel:(id)a1 enableOpen:(id /* block */)a2 willOpen:(id /* block */)a3 didOpen:(id /* block */)a4 didClose:(id /* block */)a5;
- (void)_openWithOpenModel:(id)a0;
- (void)triggerEventAndOpenWithEvent:(id)a0 openModel:(id)a1 reportCompletion:(id /* block */)a2 enableOpen:(id /* block */)a3 willOpen:(id /* block */)a4 didOpen:(id /* block */)a5 didClose:(id /* block */)a6;
- (void)triggerEventWithEvent:(id)a0 extraUserInfo:(id)a1 reportCompletion:(id /* block */)a2;
- (void)triggerEventAndOpenWithEvent:(id)a0 openModel:(id)a1 reportCompletion:(id /* block */)a2 willOpen:(id /* block */)a3 didOpen:(id /* block */)a4 didClose:(id /* block */)a5;
- (void)triggerEventAndOpenWithEvent:(id)a0 openModel:(id)a1 willOpen:(id /* block */)a2 didOpen:(id /* block */)a3 didClose:(id /* block */)a4 reportCompletion:(id /* block */)a5 openError:(id /* block */)a6;
- (void)createGlobalWindowIfNeed;
- (void)disposeGlobalWindow;
- (void)preloadWithConfigModel:(id)a0;
- (void)openWithOpenModel:(id)a0 infoModel:(id)a1 willOpen:(id /* block */)a2 didOpen:(id /* block */)a3 didClose:(id /* block */)a4;
- (void)openWithTaskID:(id)a0 openModel:(id)a1 enableOpen:(id /* block */)a2 willOpen:(id /* block */)a3 didOpen:(id /* block */)a4 didClose:(id /* block */)a5;
- (id)feelgoodWebURLStringWithChannel:(id)a0;
- (void)triggerEventAndOpenWithEvent:(id)a0 openModel:(id)a1 willOpen:(id /* block */)a2 didOpen:(id /* block */)a3 didClose:(id /* block */)a4;
- (void)closeTask;
- (void)openWithTaskID:(id)a0 openModel:(id)a1 enableOpen:(id /* block */)a2 willOpen:(id /* block */)a3 didOpen:(id /* block */)a4 didStopLoading:(id /* block */)a5 didClose:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;

@end
