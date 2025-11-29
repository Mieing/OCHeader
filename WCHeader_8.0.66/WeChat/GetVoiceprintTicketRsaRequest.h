@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetVoiceprintTicketRsaRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int getScence;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
