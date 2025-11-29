@class BaseRequest, MMListenUserConfig;

@interface MMListenReplaceUserConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenUserConfig *userConfig;

+ (void)initialize;

@end
