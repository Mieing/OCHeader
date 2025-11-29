@class BaseRequest, NSString;

@interface VerifyUserPreCheckRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opcode;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
