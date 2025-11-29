@class NSTimer, NSString, UIImage, UIImageView, AVAssetImageGenerator, MMUIView, UIImpactFeedbackGenerator, AVAsset;

@interface WCFinderVideoSliderView : MMUIView <WCFinderVideoSliderProtocol>

@property (retain, nonatomic) AVAssetImageGenerator *coverGenerator;
@property (retain, nonatomic) MMUIView *sliderBarView;
@property (retain, nonatomic) UIImageView *selectedView;
@property (nonatomic) unsigned long long thumbCount;
@property (copy, nonatomic) id /* block */ selectedChangeBlock;
@property (nonatomic) double keyFrameRate;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) UIImage *speciallyImage;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) NSTimer *panGesTimer;
@property (nonatomic) double lastLongPressLocationX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resizeImageForCGImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)initWithHeight:(double)a0 maxWidth:(double)a1;
- (void)setupGesture;
- (void)setupSubViewsWithMaxWidth:(double)a0;
- (void)loadSliderByPlayerAsset:(id)a0 keyFrameRate:(double)a1 specialImage:(id)a2 coverTimeStamp:(double)a3 selectedChangeBlock:(id /* block */)a4;
- (void)resetPanGesTimer;
- (void)handlePanGesture:(id)a0;
- (void)panGesTimerFired:(id)a0;
- (void)longPressSelectCoverGes:(id)a0;
- (void)refreshSelectedView;
- (BOOL)isSpeciallyImageSelected;
- (id)getCurrentResult;
- (void)setSelectedViewToSpecialImagePlace;
- (void)setSelectedPlayTime:(double)a0;
- (void).cxx_destruct;

@end
