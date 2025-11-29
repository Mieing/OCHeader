@class UIImageView, NSTimer, NSMutableArray, UIPanGestureRecognizer;
@protocol AWESearchSynthesisNovelSliderDelegate;

@interface AWESearchSynthesisNovelSlider : UIView {
    BOOL _tracking;
}

@property (weak, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) UIImageView *trackView;
@property (retain, nonatomic) UIImageView *progressView;
@property (retain, nonatomic) UIImageView *recordImageView;
@property (retain, nonatomic) NSMutableArray *segmentViews;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIImageView *sliderView;
@property (weak, nonatomic) id<AWESearchSynthesisNovelSliderDelegate> delegate;
@property (nonatomic) float value;
@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (nonatomic) double lineWidth;
@property (nonatomic) double shadowRadius;
@property (nonatomic) long long segmentCount;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) BOOL autoAdjustWhenEndDragging;
@property (readonly, nonatomic) BOOL isTracking;
@property (nonatomic) BOOL tapDisabled;
@property (nonatomic) BOOL autoHideSlider;
@property (nonatomic) double segWidth;
@property (nonatomic) double segHeight;
@property (nonatomic) BOOL recordImageViewHidden;
@property (nonatomic) BOOL onlySliderCanScroll;

- (void)setTrackColor:(id)a0;
- (void)setThumbImage:(id)a0;
- (void)removeTimer;
- (void)addTimer;
- (void)hideSlider;
- (void)sliderValueChange:(id)a0;
- (void)autoAdjustValue;
- (void)setRecordColor:(id)a0;
- (void)setThumbColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)tap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setProgressColor:(id)a0;
- (id)initWithDirection:(unsigned long long)a0;
- (void)showSlider;
- (void)setupLayout;

@end
