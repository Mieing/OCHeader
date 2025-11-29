@class TingPlayerManager, MMFlutterInstance, NSString, UIViewController, TingAppNavigationController, TingFlutterViewController;
@protocol ITingApp;

@interface TingFlutterPlayerRouter : TingFlutterBaseRouter <FlutterNavigatorDelegate, ITingRouter>

@property (retain, nonatomic) MMFlutterInstance *playerInstance;
@property (retain, nonatomic) TingFlutterViewController *playerVC;
@property (retain, nonatomic) TingPlayerManager *playTaskController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController<ITingApp> *app;
@property (readonly, nonatomic) UIViewController *appVisibleViewController;
@property (retain, nonatomic) TingAppNavigationController *appContainer;

- (id)createNewApp:(id)a0;
- (void)consumeCategoryItem:(id)a0 launchOptions:(id)a1 type:(unsigned long long)a2;
- (void)setDisplayMode:(int)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)openProfile:(unsigned long long)a0 locLineType:(id)a1;
- (void)tryAddTingItemToList:(id)a0;
- (void)tryAddItemsToListWithBizType:(unsigned long long)a0 scene:(int)a1 listenIdList:(id)a2 completion:(id /* block */)a3;
- (void)prepareApp:(id /* block */)a0;
- (void)onLaunch:(id)a0;
- (void)onTingUrl:(id)a0;
- (void)openTingPageUseNewEngineWithRouteName:(id)a0 params:(id)a1;
- (void)showCommonHalfScreen:(id)a0 desc:(id)a1 extraInfo:(id)a2;
- (void)initPlayTaskController;
- (id)createViewController:(id)a0 arguments:(id)a1;
- (id)createFinderProfileChildFlutterVC:(id)a0 route:(id)a1 isAuthor:(BOOL)a2 isFinderProfileHalfScreen:(BOOL)a3 commentScene:(int)a4 parentVC:(id)a5;
- (void)pushOpenFinderDiscover:(id)a0 finderUsername:(id)a1 sessionBuffer:(id)a2 navigationController:(id)a3;
- (void)pushFromViewController:(id)a0 plugin:(id)a1 route:(id)a2 arguments:(id)a3;
- (void).cxx_destruct;

@end
