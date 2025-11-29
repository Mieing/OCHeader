@class NSDictionary;

@interface ArgusLynxLoadWhiteListVerifyConfig : ArgusStrategyBaseConfig

@property (retain, nonatomic) NSDictionary *feLimitLoadSource;

+ (id)feLimitLoadSourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
