@class BaseRequest, NSData, NSString;

@interface BindPassKeyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opcode;
@property (retain, nonatomic) NSData *attestedCredentialData;
@property (retain, nonatomic) NSString *verifyId;

+ (void)initialize;

@end
