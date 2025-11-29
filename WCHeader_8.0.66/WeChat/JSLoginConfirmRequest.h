@class BaseRequest, NSString, WxaExternalInfo, NSMutableArray;

@interface JSLoginConfirmRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *scope;
@property (nonatomic) unsigned int loginType;
@property (retain, nonatomic) NSString *state;
@property (nonatomic) unsigned int opt;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WxaExternalInfo *extInfo;

+ (void)initialize;

@end
