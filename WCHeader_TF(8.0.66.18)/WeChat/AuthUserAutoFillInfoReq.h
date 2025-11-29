@class BaseRequest, NSString, NSMutableArray;

@interface AuthUserAutoFillInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *authInfoList;
@property (nonatomic) BOOL userConfirm;
@property (nonatomic) unsigned int authStatus;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

@end
