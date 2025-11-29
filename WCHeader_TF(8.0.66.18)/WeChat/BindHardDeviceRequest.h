@class BaseRequest, NSString;

@interface BindHardDeviceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bindTicket;
@property (nonatomic) unsigned int subscribeFlag;

+ (void)initialize;

@end
