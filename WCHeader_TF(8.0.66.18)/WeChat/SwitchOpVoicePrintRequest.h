@class BaseRequest;

@interface SwitchOpVoicePrintRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opcode;

+ (void)initialize;

@end
