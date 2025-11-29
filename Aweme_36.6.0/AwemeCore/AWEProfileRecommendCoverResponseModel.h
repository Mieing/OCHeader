@class NSArray, NSString;

@interface AWEProfileRecommendCoverResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *awemes;
@property (copy, nonatomic) NSString *awemeSourceText;
@property (copy, nonatomic) NSString *routerSchema;

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
