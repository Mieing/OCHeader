@class UIColor;

@interface AWESearchBackgroundPureColorModel : AWEBaseApiModel

@property (copy, nonatomic) UIColor *color;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;

- (void).cxx_destruct;

@end
