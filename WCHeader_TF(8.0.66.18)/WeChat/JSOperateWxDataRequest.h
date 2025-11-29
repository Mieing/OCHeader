@class BaseRequest, NSString, NSData, WxaExternalInfo;

@interface JSOperateWxDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *grantScope;
@property (nonatomic) unsigned int opt;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WxaExternalInfo *extInfo;
@property (nonatomic) unsigned int avatarId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int avatarOpt;
@property (nonatomic) BOOL privacyProtectInfoChecked;
@property (nonatomic) BOOL needPrivacyProtectInfo;

+ (void)initialize;

@end
