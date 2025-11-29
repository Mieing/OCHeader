@class BaseRequest, NSString, WxaExternalInfo, NSMutableArray;

@interface JSLoginRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *scope;
@property (nonatomic) unsigned int loginType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *state;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WxaExternalInfo *extInfo;

+ (void)initialize;

@end
