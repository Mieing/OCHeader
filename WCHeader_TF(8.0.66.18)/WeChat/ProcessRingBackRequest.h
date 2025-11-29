@class BaseRequest, SimpleRingBack;

@interface ProcessRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SimpleRingBack *simpleRingBack;
@property (nonatomic) unsigned int opFlag;

+ (void)initialize;

@end
