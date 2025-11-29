@class BaseRequest, NSString;

@interface SaveUserAutoFillInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *userInfoJson;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

@end
