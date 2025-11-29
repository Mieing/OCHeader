@class NSString, UIViewController;
@protocol AWEPadSplitViewService;

@interface AWEPlayInteractionPadSplitScreenController : AWEPlayInteractionNewBaseController <AWEPlayInteractionPadSplitScreenProtocol>

@property (weak, nonatomic) UIViewController *needOpenVC;
@property (copy, nonatomic) NSString *needOpenMethod;
@property (nonatomic) BOOL navigationTransitionFlag;
@property (nonatomic) BOOL hasOutPageAppearBind;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) BOOL isDismissDragging;
@property (readonly, nonatomic) BOOL supportSplit;
@property (readonly, nonatomic) BOOL supportSplitWithoutSize;
@property (readonly, weak, nonatomic) id<AWEPadSplitViewService> currentService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadUserPageAdapterClass;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)aAWEPadModuleAdapter;
- (double)rightContainerWidth;
- (BOOL)shouldDismissUserPageWithUserID:(id)a0;
- (BOOL)shouldDismissUserPageWithViewController:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0 method:(id)a1 completion:(id /* block */)a2;
- (BOOL)enableUserPageSplitScreenWithModel:(id)a0;
- (void)openSplitScreenWithViewController:(id)a0 enterMethod:(id)a1;
- (BOOL)tryOpenAnnieXViewWithURL:(id)a0 enterMethod:(id)a1;
- (void)pushWithViewController:(id)a0 enterMethod:(id)a1;
- (void)popSplitViewController:(BOOL)a0;
- (void)postSplitStatusChange;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEPadUserPageAdapter;
- (void)handleViewControllerTransition:(id)a0;
- (void)setupOutEventIfNeeded;
- (void)openCacheVCIfNeeded;
- (BOOL)enableCheckOuterPageTransition;
- (double)delayOpenSplitTime;
- (BOOL)shouldWaitViewDidAppear;
- (id)splitScreenController;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)panGesture;
- (void)willDisplay;

@end
