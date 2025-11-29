@class BaseRequest, NSString;

@interface ReceiveWxaHBRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *sendid;

+ (void)initialize;

@end
