@class AWEAwemeModel, NSString, UIPanGestureRecognizer;
@protocol AWEPadSplitViewService;

@interface AWEPadSplitViewUserPageBizAdapter : AWEPadSplitViewBaseBizAdapter <AWEPadSplitViewUserPageProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } startPanPoint;
@property (weak, nonatomic) UIPanGestureRecognizer *servicePan;
@property (nonatomic) BOOL isPanSecondary;
@property (nonatomic) BOOL isUserPageBackAction;
@property (nonatomic) BOOL willDismissByPrimaryPan;
@property (nonatomic) BOOL isClickCommentIcon;
@property (nonatomic) BOOL isVerticalSlideDismiss;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isCancelTransition;
@property (weak, nonatomic) id<AWEPadSplitViewService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadUserPageAdapterClass;

- (void)backButtonClicked;
- (id)aAWEPadSplitScreenAdapter;
- (void)updatePrimaryModel:(id)a0;
- (id)aAWEPadUserPageAdapter;
- (void)closeSplitScreen;
- (BOOL)enableSlideToFullScreen;
- (void)service:(id)a0 willShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 willDismissViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didDismissViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 willCancelDismissType:(long long)a1;
- (void)service:(id)a0 transitionFinishWithViewController:(id)a1;
- (void)service:(id)a0 transitionCancelWithViewController:(id)a1;
- (void)service:(id)a0 panGestureStartWithPanDirection:(long long)a1;
- (void)splitViewDismissWithStayTime:(double)a0 duration:(double)a1;
- (id)padSplitControllerProtocols;
- (void)userPageViewWillAppear;
- (void)trackCloseUserPageWithStayTime:(double)a0 duration:(double)a1;
- (void)trackEnterUserPage;
- (void)trackEnterPersonalDetailWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)setupObservers;
- (void)enterFullScreen;

@end
