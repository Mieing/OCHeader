@class NSString, MMFinderLiveFootageReplayModel, MMFinderLiveReplayBarrageView, MMFinderLiveReplayMessageSource, MMUIButton;
@protocol MMFinderLiveFootageReplayOperationViewDelegate;

@interface MMFinderLiveFootageReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveReplayBarrageViewDelegate>

@property (retain, nonatomic) MMFinderLiveReplayMessageSource *messageSource;
@property (nonatomic) unsigned long long lastMessageUpdateTime;
@property (nonatomic) BOOL supressMessageUpdate;
@property (retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel;
@property (retain, nonatomic) MMFinderLiveReplayBarrageView *barrageView;
@property (retain, nonatomic) MMUIButton *orientationButton;
@property (nonatomic) BOOL replayExplicitlyPaused;
@property (weak, nonatomic) id<MMFinderLiveFootageReplayOperationViewDelegate> footageReplayOperationViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 footageReplayModel:(id)a1;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)shouldHideMaskWhenCLeanScreen;
- (void)onEnterLive;
- (void)layoutUI;
- (void)createReplayControlView;
- (void)showContents;
- (void)hideContents;
- (void)layoutBarrageView;
- (void)layoutOrientationButton;
- (void)updateOrientationButtonForCurrentOrientation;
- (void)updateLiveMessageAtTime:(unsigned int)a0;
- (void)onOrientationButtonClicked;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onSliderSeekBegin;
- (void)onSliderSeekToTime:(float)a0 isAtGreateTime:(BOOL)a1;
- (void)onScrubberPauseButtonTapped;
- (void)onScrubberPlayButtonTapped;
- (double)toolViewBottom;
- (void)onCurrentTimeUpdate:(unsigned int)a0;
- (void)onVideoSizeChange:(struct CGSize { double x0; double x1; })a0;
- (void)onGetVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)barrageViewDidShowOperationMenu:(id)a0;
- (void)barrageViewDidHideOperationMenu:(id)a0;
- (void)barrageView:(id)a0 reportCommentItem:(id)a1;
- (void).cxx_destruct;

@end
