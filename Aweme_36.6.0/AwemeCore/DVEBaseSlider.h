@class UIColor, MASConstraint, CAShapeLayer, UIImage, CALayer, UILabel, UIImageView;
@protocol DVESBaseSliderProtocol;

@interface DVEBaseSlider : UIView

@property (nonatomic) float step;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) float horizontalInset;
@property (retain, nonatomic) CALayer *centralLine;
@property (nonatomic) double sliderHeight;
@property (nonatomic) BOOL showTitleWhenSliding;
@property (weak, nonatomic) id<DVESBaseSliderProtocol> delegate;
@property (retain, nonatomic) UIImage *imageCursor;
@property (nonatomic) float defaultValue;
@property (retain, nonatomic) UIColor *silderStrokeColor;
@property (retain, nonatomic) UIColor *centralLineColor;
@property (retain, nonatomic) UIColor *backLayerBackgroundColor;
@property (nonatomic) float value;
@property (nonatomic) double textOffset;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAShapeLayer *tintLayer;
@property (retain, nonatomic) CALayer *backLayer;
@property (retain, nonatomic) UIImageView *cursorView;
@property (copy, nonatomic) id /* block */ sliderAction;
@property (nonatomic) double radius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) MASConstraint *cursorLeftConstraint;

+ (id)sliderStroke;

- (void)buildLayout;
- (id)initWithStep:(float)a0 defaultValue:(float)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateCentralLine;
- (void)resetValueView;
- (void)sliderValueChangedTouches:(id)a0 end:(BOOL)a1;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)updateLabelFrame;

@end
