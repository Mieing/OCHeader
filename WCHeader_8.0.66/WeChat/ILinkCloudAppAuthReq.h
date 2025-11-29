@class BaseRequest, NSData;

@interface ILinkCloudAppAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *clientAuthReq;

+ (void)initialize;

@end
