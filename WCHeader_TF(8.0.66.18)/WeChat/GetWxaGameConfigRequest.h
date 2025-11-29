@class BaseRequest, NSString, WxaGameBaseInfo, WxaGameClientPublicLibInfo, GetWxaGameConfigRequest_WxaGameEnvContext;

@interface GetWxaGameConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WxaGameBaseInfo *wxaGameInfo;
@property (retain, nonatomic) WxaGameClientPublicLibInfo *publicLib;
@property (retain, nonatomic) GetWxaGameConfigRequest_WxaGameEnvContext *envContext;
@property (retain, nonatomic) NSString *hostAppId;

+ (void)initialize;

@end
