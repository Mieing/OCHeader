@class AWEVideoPaymentBasePresenter, NSString, CADisplayLink, AWEPreviewVideoMaskView;

@interface AWERewardedAdvertisingMaskController : AWEPlayInteractionBaseController <AWEVideoPaymentPresenterDelegate, AWEPaidStreamPlugin, AWEPaidStreamUIDelegate>

@property (retain, nonatomic) AWEPreviewVideoMaskView *maskView;
@property (retain, nonatomic) AWEVideoPaymentBasePresenter *presenter;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL didAppearNeedReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanel:(BOOL)a0;
- (void)hidePanel:(BOOL)a0;
- (void)resetDisplayLink;
- (id)trackCommonParams;
- (void)playResumeDisplayLink;
- (long long)indexForInsertBlockViewWithPaidStream:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })blockViewFrameForPaidStream:(id)a0;
- (id)trialContainerViewForPaidStream:(id)a0;
- (void)changePanel:(BOOL)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)updateVideoPlayerPeriod;
- (void)hiddenCoverImage;
- (double)offsetForLandscapeVideo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoPlayFrame;
- (void)changePanelStatusIfNeeded;
- (BOOL)usePaidStream;
- (void)reportNoTryTrack;
- (double)currentPlayPeriod;
- (void)updateProgressStatusIfNeed:(BOOL)a0;
- (Class)presenterWithModel:(id)a0 referString:(id)a1 extraInfo:(id)a2;
- (void)onMaskViewClicked;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
