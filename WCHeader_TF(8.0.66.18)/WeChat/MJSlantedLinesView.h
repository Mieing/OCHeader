@class UIColor, CAShapeLayer;

@interface MJSlantedLinesView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *maskBorderLayer;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) BOOL isMaskEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedMaskRect;
@property (retain, nonatomic) UIColor *maskBorderColor;
@property (nonatomic) double maskBorderWidth;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupLayers;
- (void).cxx_destruct;

@end
