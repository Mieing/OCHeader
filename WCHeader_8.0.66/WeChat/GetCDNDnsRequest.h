@class BaseRequest, NSString;

@interface GetCDNDnsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientIp;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setClientIp:(id)a0;
- (id)clientIp;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
