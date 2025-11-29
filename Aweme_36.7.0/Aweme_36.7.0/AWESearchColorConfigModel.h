@class UIColor;

@interface AWESearchColorConfigModel : AWEBaseApiModel

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *centerColor;
@property (nonatomic) double screenCount;

+ (id)centerColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)bgColorJSONTransformer;

- (void).cxx_destruct;

@end
