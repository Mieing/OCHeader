@class NSString, UITapGestureRecognizer, NSArray, CALayer, UIImageView, AWECommentAudioStateView, AWECommentShapeView, CAGradientLayer, UIPanGestureRecognizer, UILabel;
@protocol AWECommentAudioContentViewDelegate;

@interface AWECommentAudioContentView : UIView <UIGestureRecognizerDelegate, AWECommentAudioContentViewProtocol>

@property (retain, nonatomic) AWECommentAudioStateView *stateView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) CAGradientLayer *cursorLayer;
@property (retain, nonatomic) AWECommentShapeView *backPathView;
@property (retain, nonatomic) AWECommentShapeView *forePathView;
@property (retain, nonatomic) CALayer *foreMaskLayer;
@property (retain, nonatomic) CALayer *backMaskLayer;
@property (retain, nonatomic) UIPanGestureRecognizer *audioPanGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *averagePowerArr;
@property (nonatomic) struct CGSize { double width; double height; } pathSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isBGColorWhite;
@property (weak, nonatomic) id<AWECommentAudioContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithWave:(id)a0 duration:(long long)a1 style:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })sizeWithAverageWaveArr:(id)a0 duration:(long long)a1 style:(unsigned long long)a2;
+ (double)calculateTimeLabelWidthWithDuration:(double)a0;

- (id)initWithStyle:(unsigned long long)a0 isBGColorWhite:(BOOL)a1;
- (void)configWithWave:(id)a0 duration:(long long)a1;
- (void)configWithAverageWaveArr:(id)a0 waveHeightArr:(id)a1 duration:(long long)a2;
- (void)updateCommentAudioContentViewState:(unsigned long long)a0;
- (void)refreshPlayAudioWithCurrentTime:(double)a0;
- (void)onCommentUIThemeChange;
- (void)updateLayerWithCursorX:(double)a0;
- (id)timeTextFromTimes:(double)a0;
- (void)refreshAudioUI;
- (void)removeLoadingAnimation;
- (void)bubbleViewTapped:(id)a0;
- (void)panBubbleView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)startLoadingAnimation;

@end
