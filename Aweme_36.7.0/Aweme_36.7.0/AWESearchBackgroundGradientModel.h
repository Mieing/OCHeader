@class UIColor;

@interface AWESearchBackgroundGradientModel : AWEBaseApiModel

@property (copy, nonatomic) UIColor *startColor;
@property (copy, nonatomic) UIColor *centerColor;
@property (copy, nonatomic) UIColor *endColor;
@property (nonatomic) double centerColorPosition;
@property (nonatomic) double centerColorPXPosition;
@property (nonatomic) unsigned long long gradientLayoutType;

+ (id)startColorJSONTransformer;
+ (id)endColorJSONTransformer;
+ (id)centerColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
