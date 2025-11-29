@class NSString;

@interface AWEThirdLoginJumpModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *jumpURL;

+ (id)loginPlatformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
