@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ThirdAppVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *thirdAppTicket;
@property (nonatomic) unsigned int ticketType;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
