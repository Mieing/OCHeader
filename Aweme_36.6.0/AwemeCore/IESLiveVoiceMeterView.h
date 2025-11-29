@class CAGradientLayer, UIColor, CAShapeLayer, UIBezierPath, NSMutableArray;

@interface IESLiveVoiceMeterView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CAShapeLayer *levelLayer;
@property (retain, nonatomic) NSMutableArray *currentLevels;
@property (retain, nonatomic) UIBezierPath *levelPath;
@property (nonatomic) unsigned long long numOfLevels;
@property (nonatomic) double levelWidth;
@property (nonatomic) double levelMargin;
@property (nonatomic) double minLength;
@property (nonatomic) BOOL useSingleColor;
@property (retain, nonatomic) UIColor *levelColor;

- (void)resetLevelMeter;
- (void)updateWithVolumePower:(float)a0;
- (void)updateLevelLayer;
- (void)updateLevelMeter:(float)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)colorLayer;

@end
