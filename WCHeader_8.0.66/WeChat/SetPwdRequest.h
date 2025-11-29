@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface SetPwdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey;
@property (nonatomic) unsigned int ticketType;

+ (void)initialize;

@end
