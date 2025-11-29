@class NSArray, CAGradientLayer;

@interface IESECLiveAtmosphereLinearGradientBackgroundView : UIView

@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (copy, nonatomic) NSArray *backgroundUIColors;
@property (copy, nonatomic) NSArray *backgroundGradientLocations;
@property (copy, nonatomic) NSArray *borderColors;
@property (copy, nonatomic) NSArray *borderGradientLocations;
@property (nonatomic) BOOL borderHidden;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long corners;
@property (nonatomic) double borderWidth;

- (id)createLeftToRightGradientLayer;
- (void)updateBorderLayerMask;
- (void)setBackgroundGradientStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setBorderGradientStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
