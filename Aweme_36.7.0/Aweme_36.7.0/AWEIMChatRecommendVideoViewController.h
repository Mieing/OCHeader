@class AWEIMHalfScreenContainerViewController, NSString, AWEIMEmoticonLoadingView, NSDictionary, AWEIMChatRecommendVideoContentView, AWEIMChatRecommendVideoContext, AWEIMChatRecommendVideoTitleView;

@interface AWEIMChatRecommendVideoViewController : AWEIMComponentViewController <AWEIMHalfScreenContainerScrollProtocol, AWEIMComponentManagerDependency, AWEZoomTransitionOuterContextProvider, AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) AWEIMChatRecommendVideoContext *context;
@property (nonatomic) unsigned long long currentType;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) AWEIMChatRecommendVideoTitleView *titleView;
@property (retain, nonatomic) AWEIMChatRecommendVideoContentView *contentView;
@property (retain, nonatomic) AWEIMEmoticonLoadingView *loadingView;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (id)modernTransitionContext;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithToContext:(id)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (long long)preferScaleMode;
- (BOOL)dismissGestureRecognizerShouldBegin;
- (void)p_requestData;
- (void)p_configViewWithModel:(id)a0;
- (void)p_configContainerVCWithStyle:(unsigned long long)a0;
- (void)p_setupContentViewIfNeededWithDisplayType:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)scrollView;
- (void)viewDidLoad;
- (void)didTapCloseButton;

@end
