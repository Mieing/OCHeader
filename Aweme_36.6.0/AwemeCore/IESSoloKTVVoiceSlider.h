@class UIButton, UILabel, UIView;

@interface IESSoloKTVVoiceSlider : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *fgLine;
@property (retain, nonatomic) UIView *bgLine;
@property (retain, nonatomic) UIView *centerDot;
@property (retain, nonatomic) UIView *arrow;
@property (nonatomic) double beginXOffset;
@property (nonatomic) BOOL inArrow;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ valueChangedEvent;
@property (nonatomic) float value;
@property (nonatomic) float maxValue;
@property (nonatomic) float stepValue;
@property (nonatomic) float pitchValue;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)updateValueWithMS:(float)a0;
- (void)updateFrameWithValue:(float)a0;
- (void)arrowAction:(id)a0;
- (double)protectValue:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
