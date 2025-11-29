@class BaseRequest, NSString;

@interface BindEmailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSString *email;

+ (void)initialize;

@end
