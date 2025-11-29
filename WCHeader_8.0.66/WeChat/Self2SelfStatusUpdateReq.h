@class BaseRequest;

@interface Self2SelfStatusUpdateReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
