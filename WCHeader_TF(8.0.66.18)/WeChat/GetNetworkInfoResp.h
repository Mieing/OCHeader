@class NSString, BaseResponse;

@interface GetNetworkInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *networkId;
@property (retain, nonatomic) NSString *networkIdCtx;
@property (nonatomic) int ispId;
@property (retain, nonatomic) NSString *clientIp;

+ (void)initialize;

- (void)setClientIp:(id)a0;
- (id)clientIp;
- (void)setIspId:(int)a0;
- (int)ispId;
- (void)setNetworkIdCtx:(id)a0;
- (id)networkIdCtx;
- (void)setNetworkId:(id)a0;
- (id)networkId;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
