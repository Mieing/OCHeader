@class BaseRequest, NSString;

@interface PayChargeProxyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSString *reqData;

+ (void)initialize;

@end
