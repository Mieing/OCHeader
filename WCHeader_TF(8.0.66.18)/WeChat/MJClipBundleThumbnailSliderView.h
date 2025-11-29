@class NSTimer, UIView, MJPublisherMovieCompositionTask, UIImage, NSString, UIImageView, MMUIView, UIImpactFeedbackGenerator;

@interface MJClipBundleThumbnailSliderView : MMUIView <WCFinderVideoSliderProtocol>

@property (retain, nonatomic) UIView *renderView;
@property (retain, nonatomic) MMUIView *sliderBarView;
@property (retain, nonatomic) UIImageView *selectedView;
@property (nonatomic) unsigned long long thumbCount;
@property (copy, nonatomic) id /* block */ selectedChangeBlock;
@property (nonatomic) double keyFrameRate;
@property (retain, nonatomic) UIImage *speciallyImage;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) NSTimer *panGesTimer;
@property (nonatomic) double lastLongPressLocationX;
@property (retain, nonatomic) MJPublisherMovieCompositionTask *compositionTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHeight:(double)a0 maxWidth:(double)a1 compositionTask:(id)a2;
- (void)setupGesture;
- (void)setupSubViewsWithMaxWidth:(double)a0;
- (void)loadSliderByPlayerAsset:(id)a0 keyFrameRate:(double)a1 specialImage:(id)a2 coverTimeStamp:(double)a3 selectedChangeBlock:(id /* block */)a4;
- (void)_innerLoadSliderWithKeyFrameRate:(double)a0 specialImage:(id)a1 coverTimeStamp:(double)a2 selectedChangeBlock:(id /* block */)a3;
- (void)_snapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withTimes:(id)a1 coverWidth:(double)a2;
- (void)resetPanGesTimer;
- (void)handlePanGesture:(id)a0;
- (void)panGesTimerFired:(id)a0;
- (void)longPressSelectCoverGes:(id)a0;
- (void)refreshSelectedView;
- (BOOL)isSpeciallyImageSelected;
- (id)getCurrentResult;
- (void)setSelectedViewToSpecialImagePlace;
- (void)setSelectedPlayTime:(double)a0;
- (void)snapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (double)videoDuration;
- (void).cxx_destruct;

@end
