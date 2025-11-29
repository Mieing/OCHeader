@class UIImpactFeedbackGenerator, UIPanGestureRecognizer, NSString, NSArray, UILabel, NSMutableArray, UIView;

@interface DUXSlider : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sliderView;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *thumbPointView;
@property (retain, nonatomic) UIView *rectView;
@property (retain, nonatomic) UIView *activeView;
@property (retain, nonatomic) NSMutableArray *numberX;
@property (retain, nonatomic) NSMutableArray *pointViews;
@property (nonatomic) BOOL isFitNumber;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedBack;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) double panValue;
@property (nonatomic) double maxScale;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double step;
@property (nonatomic) double value;
@property (nonatomic) BOOL tooltipVisible;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL isConstantMode;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL titleAfterSlider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } thumbInteractiveEdge;
@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSArray *marks;
@property (copy, nonatomic) id /* block */ valChangeBlock;
@property (nonatomic) BOOL enableImpactFeedBack;
@property (copy, nonatomic) id /* block */ markAdsorptionBlock;
@property (nonatomic) BOOL disableNormalValue;
@property (nonatomic) BOOL disablePanNormalValue;
@property (nonatomic) unsigned long long enlargeType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (void)setupColor;
- (void)setupSliderViewFrame;
- (void)setupScroll;
- (void)setupPoint;
- (void)setEquivalenceMarkPoint:(unsigned long long)a0 withLimtPoint:(BOOL)a1;
- (void)setEquivalenceMarkPoint:(unsigned long long)a0 withLimtPoint:(BOOL)a1 withDisableNormalValue:(BOOL)a2;
- (id)getPointView;
- (double)getRealValueWithDisableNormalVaule:(double)a0;
- (void)setupTitleLabelFont;
- (void)setupValueLabelFont;
- (void)updateComponentIfNeed;
- (void)setEquivalenceMarkPoint:(unsigned long long)a0;
- (void)setEquivalenceMarkPoint:(unsigned long long)a0 withDisableNormalValue:(BOOL)a1;
- (void)setEquivalenceMarkPoint:(unsigned long long)a0 withLimtPoint:(BOOL)a1 withDisableNormalValue:(BOOL)a2 withDisablePanNormalValue:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_viewHeight;
- (void)changeValue:(id)a0;

@end
