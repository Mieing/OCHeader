@class AWELandscapeProgressView, NSString;

@interface AWELandscapeProgressSliderController : AWELandscapeInteractionBaseController <AWELandscapeProgressViewDelegate, AWELandscapeProgressSliderControllerProtocol>

@property (retain, nonatomic) AWELandscapeProgressView *progressView;
@property (nonatomic) BOOL shouldResponsePanGesture;
@property (nonatomic) BOOL shouldResponseTapGesture;
@property (nonatomic) long long beforeSlideState;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)jumpToSelectedChapter:(id)a0;
- (BOOL)isPlayStarted;
- (id)objectByProtocol:(id)a0;
- (void)seekToPlayTime:(double)a0 completion:(id /* block */)a1;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)updateControllerWithAnimationOffset:(double)a0 positon:(long long)a1;
- (void)showScreenCastView:(BOOL)a0 showFeedBack:(BOOL)a1;
- (void)updateScreenCastProgress;
- (void)willEnterSplitScreen:(BOOL)a0 movePoint:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2;
- (void)updateState:(long long)a0 animated:(BOOL)a1 layoutAnimated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isAutoEnterQuietState;
- (void)traceShowChapterProgressBar;
- (void)trackDragSliderFromTime:(double)a0 toTime:(double)a1 bySlideProgress:(BOOL)a2;
- (long long)getCurrentChapterIndex;
- (void)progressViewClicked:(double)a0;
- (void)progressViewTouchBegan:(double)a0;
- (void)progressViewTouchChanged:(double)a0;
- (void)progressViewTouchEnded:(double)a0 bySlideScreen:(BOOL)a1;
- (void)progressViewShowChapterPanel;
- (void)progressViewShowLvideoHighLightPanel;
- (void)onNextChapterLabelClicked;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)reset;
- (double)totalDuration;
- (void)viewDidLoad;

@end
