@class BaseRequest, NSString;

@interface AdinfoProxyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *function;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *req;

+ (void)initialize;

@end
