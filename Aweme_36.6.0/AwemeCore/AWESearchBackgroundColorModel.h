@class UIColor;

@interface AWESearchBackgroundColorModel : AWEBaseApiModel

@property (retain, nonatomic) UIColor *darkColor;
@property (retain, nonatomic) UIColor *lightColor;
@property (nonatomic) double gradientHeight;
@property (nonatomic) double offset;
@property (nonatomic) double screenWidth;

+ (id)colorWithARGBHexString:(id)a0;
+ (id)darkColorJSONTransformer;
+ (id)lightColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
