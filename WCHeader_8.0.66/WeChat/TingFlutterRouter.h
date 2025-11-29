@class NSString, NSArray, MMFlutterViewController, MMFlutterInstance, TingPlayerManager, TingAppNavigationController, NSMutableArray, UIViewController;
@protocol ITingApp;

@interface TingFlutterRouter : TingFlutterBaseRouter <ITingRouter>

@property (retain, nonatomic) MMFlutterViewController *appViewController;
@property (retain, nonatomic) MMFlutterInstance *home;
@property (retain, nonatomic) TingPlayerManager *playTaskController;
@property (retain, nonatomic) NSArray *tingPlugins;
@property BOOL hasWarmUp;
@property BOOL doingWarmUp;
@property (retain, nonatomic) NSMutableArray *completeBlockArray;
@property (readonly, nonatomic) UIViewController<ITingApp> *app;
@property (readonly, nonatomic) UIViewController *appVisibleViewController;
@property (retain, nonatomic) TingAppNavigationController *appContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_initEngineGroup:(id)a0;
- (void)initPlayTaskController;
- (void)flutterRouteWithString:(id)a0 params:(id)a1;
- (id)buildArgumentWithDefaultParamsAndNewParams:(id)a0;
- (id)createNewApp:(id)a0;
- (id)createFinderProfileChildFlutterVC:(id)a0 route:(id)a1 isAuthor:(BOOL)a2 isFinderProfileHalfScreen:(BOOL)a3 commentScene:(int)a4 parentVC:(id)a5;
- (void)pushOpenFinderDiscover:(id)a0 finderUsername:(id)a1 sessionBuffer:(id)a2 navigationController:(id)a3;
- (void)warmUpEngineNew:(id /* block */)a0;
- (void)warmUpEngine:(id /* block */)a0;
- (double)warmUpStart:(id /* block */)a0;
- (void)warmUpEnd:(BOOL)a0 startTime:(double)a1;
- (void)flushCompleteBlock;
- (void)reportWarmUp:(double)a0 timeout:(BOOL)a1;
- (long long)warmUpMode;
- (void)tryAddTingItemToList:(id)a0;
- (void)tryAddItemsToListWithBizType:(unsigned long long)a0 scene:(int)a1 listenIdList:(id)a2 completion:(id /* block */)a3;
- (void)prepareApp:(id /* block */)a0;
- (void)onLaunch:(id)a0;
- (void)onLaunchV1:(id)a0;
- (void)openTingWithLaunchType:(unsigned long long)a0 host:(id)a1 path:(id)a2 query:(id)a3;
- (void)onTingUrl:(id)a0;
- (void)onLaunchV2:(id)a0;
- (void)openTingPageUseNewEngineWithRouteName:(id)a0 params:(id)a1;
- (void)showCommonHalfScreen:(id)a0 desc:(id)a1 extraInfo:(id)a2;
- (void).cxx_destruct;

@end
