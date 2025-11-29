@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface PushLoginURLRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *autoAuthTicket;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (nonatomic) unsigned int opcode;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey;
@property (retain, nonatomic) NSString *hardwareExtra;
@property (retain, nonatomic) SKBuiltinBuffer_t *msgContextPubKey;

+ (void)initialize;

@end
