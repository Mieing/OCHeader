@class RACCompoundDisposable, NSString, UIView, IESLiveWebpLoadingView;

@interface HTSLiveLoadingAnimationFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, HTSLiveStreamPlayerAction, IESLiveSocialInteractAction>

@property (retain, nonatomic) UIView *loadingIndicator;
@property (retain, nonatomic, getter=lazyCreateWebpLoadingView) IESLiveWebpLoadingView *webpLoadingView;
@property (nonatomic) long long optimizeStuck;
@property (retain, nonatomic) RACCompoundDisposable *disposables;
@property (nonatomic) BOOL isLivePaused;
@property (nonatomic) BOOL showCameraChangeLoading;
@property (retain, nonatomic) NSString *loadingText;
@property (nonatomic) BOOL inBackgroundLinking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)streamPlayerDidReadyToRender;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (BOOL)useMatchLoadingView;
- (double)topEdgForLoading;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
