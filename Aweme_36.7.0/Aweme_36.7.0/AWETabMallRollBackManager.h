@class NSString, NSArray, NSMutableDictionary, NSHashTable, NSDictionary, UIViewController;
@protocol AWETabMallHalfScreenCycleProtocol;

@interface AWETabMallRollBackManager : NSObject <IESECPageDisplayCycleInterface, IESECTaskBannerLifeCycleInterface, HTSService, AWETabMallRollBackProtocol>

@property (weak, nonatomic) id<AWETabMallHalfScreenCycleProtocol> concernCyclePage;
@property (retain, nonatomic) UIViewController *stashedViewController;
@property (copy, nonatomic) NSString *currentTabIdentifer;
@property (copy, nonatomic) NSArray *rootVCStack;
@property (copy, nonatomic) NSArray *presentedVCStack;
@property (nonatomic) BOOL isRollBacking;
@property (retain, nonatomic) NSMutableDictionary *willCloseHandlers;
@property (copy, nonatomic) NSHashTable *avoidStashScenese;
@property (copy, nonatomic) NSString *deliverySessionId;
@property (copy, nonatomic) NSDictionary *deliveryParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (void)didOpenPage:(id)a0 switchMode:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)willClosePage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (BOOL)isCurrentTopScene;
+ (void)willOpenNextInPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)willAppearAgainForPage:(id)a0 switchMode:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)didPage:(id)a0 switchTo:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)willAppearPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)willDisappearPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)didPage:(id)a0 panPercent:(double)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)didPage:(id)a0 scrollOffset:(double)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (BOOL)isGuidePopupViewController:(id)a0;
+ (void)presentVCStack:(id)a0 byPresentingVC:(id)a1;
+ (id)findProductDetailViewController:(id)a0;
+ (BOOL)canResponseWithScene:(long long)a0 fromVC:(id)a1 extra:(id)a2;
+ (BOOL)canResponseSearchAdSplitScreenWithScene:(long long)a0 fromVC:(id)a1 extra:(id)a2;
+ (void)taskBanner:(id)a0 didAppearInView:(id)a1;
+ (void)taskBanner:(id)a0 sizeChangedInView:(id)a1;
+ (void)taskBanner:(id)a0 didDisAppearInView:(id)a1;
+ (void)didFirstScreenPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;

- (void)addObserve;
- (void)bindConcernCyclePage:(id)a0;
- (void)unbindConcernCyclePage:(id)a0;
- (void)concernListViewController:(id)a0 didScroll:(double)a1;
- (BOOL)isDeliveryByConcernSceneWithPageTag:(id)a0;
- (BOOL)needShowTabMallGuideForThisRouteTransition:(id)a0;
- (void)expandRollBack:(BOOL)a0;
- (BOOL)stashTopViewController;
- (BOOL)popViewControllerStashed;
- (void)clearStashedViewController;
- (BOOL)stashViewControllerStack;
- (BOOL)popViewControllerStackWithTabSwitchBlock:(id /* block */)a0;
- (void)clearViewControllerStack;
- (BOOL)isTopSceneWhenGuideToMall;
- (void)registerAvoidBeStashScene:(id)a0;
- (void)setupDeliveryParams:(id)a0;
- (void)clearVCStackByMemoryWarning:(id)a0;
- (void)addWillCloseHandlerForScene:(long long)a0 handler:(id /* block */)a1;
- (void)puzzlePopupWillShow:(id)a0;
- (void)puzzlePopupWillDismiss:(id)a0;
- (void)puzzlePopupWillOpenNext:(id)a0;
- (id)vcStackClassNameArr:(id)a0;
- (BOOL)fallbackPresentVCStack;
- (BOOL)needSkipStashIfNeeded:(id)a0;
- (void)handleRootVCStackIfNeeded;
- (void)dealtStackAndPresented;
- (void)handlePresentedVCStack:(id)a0;
- (void)setLiveRoomMute:(BOOL)a0;
- (BOOL)p_isNotDeliveredViewController:(id)a0;
- (BOOL)canResponsePuzzleWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
