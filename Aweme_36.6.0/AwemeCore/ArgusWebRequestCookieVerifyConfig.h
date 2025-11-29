@class NSArray;

@interface ArgusWebRequestCookieVerifyConfig : ArgusStrategyBaseConfig

@property (nonatomic) BOOL ignoreOriginCloseSecureCookieVerify;
@property (retain, nonatomic) NSArray *shareCookieSensitiveKeys;
@property (retain, nonatomic) NSArray *shareHeaderSensitiveKeys;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
