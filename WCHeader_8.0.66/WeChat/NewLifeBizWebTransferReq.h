@class NSString, NewLifeBizJsApiRequest;

@interface NewLifeBizWebTransferReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NewLifeBizJsApiRequest *jsApiRequest;

+ (void)initialize;

@end
