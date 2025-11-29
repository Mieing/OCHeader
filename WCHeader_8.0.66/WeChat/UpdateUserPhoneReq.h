@class BaseRequest, NSString;

@interface UpdateUserPhoneReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *mobile;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
