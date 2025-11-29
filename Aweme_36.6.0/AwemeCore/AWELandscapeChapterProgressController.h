@class NSString, AWEGradientView, AWEDemaciaChapterProgressSlider;

@interface AWELandscapeChapterProgressController : AWELandscapeInteractionBaseController <AWEDemaciaChapterProgressSliderDelegate, AWELandscapeChapterProgressControllerProtocol>

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEDemaciaChapterProgressSlider *chapterProgress;
@property (nonatomic) long long beforeSlideState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)didEnterLandscape;
- (BOOL)shouldReceiveGestureRecognizer:(id)a0 touch:(id)a1;
- (BOOL)chapterProgressSliderEnabledInteraction;
- (void)showChapterProgress:(BOOL)a0;
- (BOOL)shouldShowChapterProgressWithModel:(id)a0;
- (BOOL)isShowingChapterProgress;
- (double)calculateProgressWidth;
- (void)updateChapterProgressLayout;
- (void)refreshToCurrentPlayBackTime;
- (double)defaultPlayBackTime;
- (void)updateState:(long long)a0;
- (double)screenHeight;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (double)screenWidth;
- (void)reset;
- (void)viewDidLoad;
- (double)currentPlaybackTime;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
