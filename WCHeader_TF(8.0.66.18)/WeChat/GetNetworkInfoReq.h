@class BaseRequest, NSString;

@interface GetNetworkInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *networkId;
@property (retain, nonatomic) NSString *networkIdCtx;
@property (retain, nonatomic) NSString *clientIp;

+ (void)initialize;

- (void)setClientIp:(id)a0;
- (id)clientIp;
- (void)setNetworkIdCtx:(id)a0;
- (id)networkIdCtx;
- (void)setNetworkId:(id)a0;
- (id)networkId;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
