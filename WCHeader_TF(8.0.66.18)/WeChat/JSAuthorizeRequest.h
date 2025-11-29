@class BaseRequest, NSString, WxaExternalInfo, WxaPluginAppInfo, NSMutableArray;

@interface JSAuthorizeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *scope;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WxaExternalInfo *extInfo;
@property (retain, nonatomic) NSString *jsapiName;
@property (retain, nonatomic) WxaPluginAppInfo *pluginInfo;
@property (nonatomic) BOOL needPrivacyProtectInfo;

+ (void)initialize;

@end
