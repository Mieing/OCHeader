@class NSLock, AWEAwemeModel, NSString, AWEAdUniversalJSBridgeManager, BDMannorManager, NSMutableArray, NSObject, UIViewController;
@protocol AWEModernFeedAwemeViewControllerMannorProtocol, BDMannorAdComponentProtocol;

@interface AWEAdMannorSearchCardManager : NSObject <AWEAdMannorSearchCardManager, AWEAdUniversalJSBridgeContainerProtocol, BDMannorAdComponentDelegate>

@property (retain, nonatomic) NSObject<BDMannorAdComponentProtocol> *mannorComponent;
@property (retain, nonatomic) BDMannorManager *mannorManager;
@property (retain, nonatomic) AWEAdUniversalJSBridgeManager *mannorJSBridgeManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) UIViewController<AWEModernFeedAwemeViewControllerMannorProtocol> *interactionController;
@property (copy, nonatomic) id /* block */ nativeButtonFlashHandler;
@property (copy, nonatomic) id /* block */ showAdOperationGuideHandler;
@property (copy, nonatomic) id /* block */ closeAdOperationGuideHandler;
@property (retain, nonatomic) NSLock *checkDowngradeLock;
@property (retain, nonatomic) NSMutableArray *checkDowngradeList;
@property (nonatomic) BOOL hasRecordedLeftContainerAlpha;
@property (nonatomic) BOOL shouldShowAdButtonWhenAllFailed;
@property (nonatomic) long long componentCountNotFailedYet;
@property (nonatomic) double leftContainerAlpha;
@property (copy, nonatomic) NSString *adEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldBlockAdLearnMoreView:(id)a0;
+ (BOOL)shouldShowAdMannorCard:(id)a0;
+ (BOOL)shouldShowAdMannorOperationViewWithModel:(id)a0;
+ (BOOL)shouldShowAdMannorLearnMoreLynxView:(id)a0;
+ (BOOL)shouldShowMannorAdKVAbStractView:(id)a0;
+ (id)getKVAbstractWithAweme:(id)a0;

- (void)showAdMannorOperationView;
- (void)updateLeftContainerAlphaWhenAdOperationViewDismiss;
- (void)playGuideAnimation;
- (void)playFlashAnimated:(BOOL)a0;
- (void)updateLearnMoreView;
- (void)playAnimationForFollowAd;
- (void)reShowBtnWhenAdUnfollow;
- (void)feedControllerViewable:(BOOL)a0;
- (BOOL)showAdMannorLearnMoreView;
- (BOOL)changeAdMannorLearnMoreViewColor;
- (void)sendEvent:(id)a0 componentId:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)p_setupMannorCard;
- (id)p_mannorContext;
- (void)mannorComponentDidLoadFailed:(id)a0 error:(id)a1 componentType:(id)a2;
- (void)mannorComponentDowngrade:(id)a0 errorMessage:(id)a1 componentType:(id)a2;
- (void)sendFeedPageVisiable:(BOOL)a0;
- (void)p_trackCloseEventIfNeeded;
- (void)p_trackOthershowOverIfNeeded;
- (id)p_mannorComponentJSBridges;
- (id)p_mannorJSBInjectHandlerMethodMap;
- (void)p_mannorCardClickedWithComponentType:(id)a0 params:(id)a1;
- (void)p_LynxCardClickedWith:(id)a0;
- (void)p_kvAbstractComponentClicked;
- (void)notifyLynxButtonWidth:(double)a0;
- (id)mannorLearnMoreLynxView:(id)a0;
- (void)setupSearchCardWithInteractionViewController:(id)a0 model:(id)a1;
- (id)mannorNativeKVAbstractView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)prepareToAnimate;

@end
