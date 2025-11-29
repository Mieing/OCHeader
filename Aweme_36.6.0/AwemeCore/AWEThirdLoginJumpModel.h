@class NSString;

@interface AWEThirdLoginJumpModel : AWEBaseApiModel

@property (nonatomic) unsigned long long loginPlatform;
@property (nonatomic) BOOL isJump;
@property (copy, nonatomic) NSString *jumpURL;

+ (id)loginPlatformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
