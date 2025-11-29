@class NSString, GetNetworkInfoReq;

@interface WCGetNetworkIdCgi : WCBaseCgi

@property (retain, nonatomic) GetNetworkInfoReq *getNetworkInfoReq;
@property (copy, nonatomic) NSString *localNetId;
@property (copy, nonatomic) NSString *localCtx;
@property (copy, nonatomic) NSString *localClientIp;

- (id)init;
- (void)startRequest;
- (void)getLocalNetworkId;
- (BOOL)isRequesting;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
