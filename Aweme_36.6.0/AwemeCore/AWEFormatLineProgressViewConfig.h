@class UIColor;

@interface AWEFormatLineProgressViewConfig : NSObject

@property (nonatomic) double lineHeight;
@property (nonatomic) double lineWidth;
@property (nonatomic) double lineCornerRadius;
@property (nonatomic) double minAnimateDuration;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *progressColor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
