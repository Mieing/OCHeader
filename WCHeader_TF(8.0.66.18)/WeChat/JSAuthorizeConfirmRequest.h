@class BaseRequest, NSString, WxaExternalInfo, NSMutableArray;

@interface JSAuthorizeConfirmRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *scope;
@property (nonatomic) unsigned int opt;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WxaExternalInfo *extInfo;
@property (nonatomic) BOOL privacyProtectInfoChecked;

+ (void)initialize;

@end
