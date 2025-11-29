@class NSArray;

@interface AWEAdTempUserPostsResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *awemes;

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
