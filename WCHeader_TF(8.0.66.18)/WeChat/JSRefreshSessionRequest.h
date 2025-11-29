@class BaseRequest, NSString, WxaExternalInfo;

@interface JSRefreshSessionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WxaExternalInfo *extInfo;

+ (void)initialize;

@end
