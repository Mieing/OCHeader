@class UIImage, UIColor;

@interface MAPathRendererBridge : MABaseRendererBridge

@property (retain, nonatomic) UIImage *strokeImage;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineJoinType;
@property (nonatomic) int lineCapType;
@property (nonatomic) double miterLimit;
@property (nonatomic) int lineDashType;
@property (nonatomic) BOOL showRangeEnabled;
@property (nonatomic) struct MAPathShowRange { float begin; float end; } showRange;

- (void).cxx_destruct;

@end
