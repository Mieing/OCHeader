@class UIView, NSString, IESLivePlaybackSeekVerticalPreview, IESLivePlaybackSeekLandscapePreview, IESLivePlaybackPreviewImageHandler, IESLivePlaybackSeekPortraitPreview, IESLivePlaybackSeekContainerView, IESLivePlaybackSimpleProgressView, IESLivePlaybackSeekViewModel;
@protocol IESLivePlaybackSeekPreview, IESLivePlaybackSeekRouter;

@interface IESLivePlaybackSeekPlayFragment : IESLivePlaybackComponent <IESLivePlaybackSeekContainerRouter, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackOrientationActions, IESLivePlaybackAutoRotateAction, IESLiveTrackerDelegate, IESLivePlaybackSeekViewModelReaction, IESLivePlaybackSeekAction, IESLivePlaybackPaywallFreeTrialAction, IESLivePlaybackChangeStreamAction, IESLivePaidStreamActionAdapter>

@property (retain, nonatomic) IESLivePlaybackSeekViewModel<IESLivePlaybackSeekRouter> *viewModel;
@property (retain, nonatomic) IESLivePlaybackSeekContainerView *seekContainer;
@property (retain, nonatomic) IESLivePlaybackSimpleProgressView *simpleProgressView;
@property (retain, nonatomic) IESLivePlaybackPreviewImageHandler *previewImgHandler;
@property (retain, nonatomic) UIView<IESLivePlaybackSeekPreview> *currentPreview;
@property (retain, nonatomic) IESLivePlaybackSeekPortraitPreview *portraitPreview;
@property (retain, nonatomic) IESLivePlaybackSeekLandscapePreview *landscapePreview;
@property (retain, nonatomic) IESLivePlaybackSeekVerticalPreview *verticalPreview;
@property (nonatomic) BOOL isSeekContainerHidden;
@property (nonatomic) BOOL isDraging;
@property (nonatomic) double startSeekTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)didForceUpdateToOrientation:(long long)a0;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)handlePauseBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleNextBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleCommentBtn:(id)a0 hidden:(BOOL)a1;
- (id)seekContainerView;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)onOrientationTransitionEnd;
- (void)onSeekStart;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)componentUICreateDelay;
- (void)onSeekGestureEnd;
- (void)freeTrialDidFinish;
- (void)streamChangedWithEpisode:(id)a0;
- (void)handleOrientationBtn:(id)a0 hidden:(BOOL)a1;
- (BOOL)currentSeekContainerIsHidden;
- (void)remakeConstraintsWithOrientation:(BOOL)a0;
- (void)sendSeekContainerShowEvent:(BOOL)a0;
- (void)showPreView:(BOOL)a0;
- (void)seekContainerIsAccessibilityElement;
- (void)updatePreViewForVideoIfNeed:(double)a0;
- (void)remakePhoneConstraintsWithOrientation:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })progressBarAutoHideTranform:(BOOL)a0;
- (void)_updateSeekUIWithProgress:(double)a0;
- (void)updateUIWithProgress:(double)a0;
- (BOOL)isCurrentSeekContainerHidden;
- (void)p_showPadSeekUseLayoutFullScreen;
- (void)p_showPadSeekUseLayoutHalfScreen;
- (void).cxx_destruct;
- (void)addObserver;
- (void)setup;

@end
