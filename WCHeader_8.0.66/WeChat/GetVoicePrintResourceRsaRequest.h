@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetVoicePrintResourceRsaRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int resScence;
@property (retain, nonatomic) NSString *verifyTicket;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
