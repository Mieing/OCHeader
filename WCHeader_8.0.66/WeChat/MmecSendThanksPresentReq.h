@class BaseRequest, NSString;

@interface MmecSendThanksPresentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *presentOrderId;
@property (nonatomic) unsigned int reqType;

+ (void)initialize;

@end
