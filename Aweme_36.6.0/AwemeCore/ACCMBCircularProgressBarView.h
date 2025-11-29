@class NSString, UIColor;

@interface ACCMBCircularProgressBarView : UIView

@property (nonatomic) BOOL showValueString;
@property (nonatomic) double value;
@property (nonatomic) double maxValue;
@property (nonatomic) long long decimalPlaces;
@property (copy, nonatomic) NSString *valueFontName;
@property (nonatomic) double valueFontSize;
@property (nonatomic) double valueDecimalFontSize;
@property (nonatomic) BOOL showUnitString;
@property (copy, nonatomic) NSString *unitFontName;
@property (nonatomic) double unitFontSize;
@property (copy, nonatomic) NSString *unitString;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) double progressRotationAngle;
@property (nonatomic) double progressAngle;
@property (nonatomic) double progressLineWidth;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressStrokeColor;
@property (nonatomic) long long progressCapType;
@property (nonatomic) double emptyLineWidth;
@property (retain, nonatomic) UIColor *emptyLineColor;
@property (retain, nonatomic) UIColor *emptyLineStrokeColor;
@property (nonatomic) long long emptyCapType;
@property (nonatomic) struct CGPoint { double x0; double x1; } textOffset;
@property (nonatomic) BOOL countdown;

+ (Class)layerClass;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)safeCapType:(long long)a0;
- (double)progressRootationAngle;
- (long long)EmptyCapType;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)progressLayer;

@end
