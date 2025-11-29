@interface ArgusJSBAuthStrategyConfig : ArgusStrategyBaseConfig

@property (nonatomic) BOOL enableLynxJSBAuth;
@property (nonatomic) BOOL enableLynxCallLimitVerify;

+ (id)JSONKeyPathsByPropertyKey;

@end
