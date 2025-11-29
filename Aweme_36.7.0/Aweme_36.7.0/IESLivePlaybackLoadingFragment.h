@class IESLiveWebpLoadingView, IESLivePlaybackLoadingErrorView, NSString, IESLivePlaybackVerticalErrorView, UIView, UIButton;
@protocol IESVSVideoPlayerRouter, IESLivePlaybackLoadingRetryView;

@interface IESLivePlaybackLoadingFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackLoadingRouter, IESLivePlaybackCloseViewAction, IESLiveAirPlayAction>

@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) IESLivePlaybackLoadingErrorView *horizontalErrorView;
@property (retain, nonatomic) IESLivePlaybackVerticalErrorView *verticalErrorView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView<IESLivePlaybackLoadingRetryView> *loadingErrorView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (nonatomic) BOOL isPlayingError;
@property (retain, nonatomic) id<IESVSVideoPlayerRouter> videoPlayerRouter;
@property (nonatomic) BOOL hasInitContentUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)closeButtonDidTap:(id)a0;
- (void)endLoading;
- (void)startCastWhenComponentDidMount;
- (void)startCastWhenChangeStream;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoRenderStart;
- (void)onVideoStalledStart:(long long)a0 reason:(unsigned long long)a1;
- (void)onVideoStalledEnd;
- (void)onVideoError:(id)a0;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onLayoutCloseButtonView;
- (void)startBufferLoading;
- (void)startLoadingOnView:(id)a0 withText:(id)a1;
- (void)loadingOnView:(id)a0 withText:(id)a1;
- (void)initShowLoadingIfNeed;
- (void)hidePlayerErrorView;
- (void)p_layoutCloseButton;
- (void)p_updateLoadingContainerView:(BOOL)a0;
- (void)p_updateErrorView;
- (void)startLoadVideo;
- (void)startReloadLoading:(id)a0;
- (void)showPlayerErrorView;
- (BOOL)p_isVertical;
- (void).cxx_destruct;
- (void)restart;
- (void)setupViews;

@end
