@class SnsWithTaPageRequest, WCBaseNetworkingError, SnsWithTaPageResponse;

@interface WCTogetherHistoryCGI : WCBaseCgi

@property (retain, nonatomic) SnsWithTaPageRequest *request;
@property (retain, nonatomic) SnsWithTaPageResponse *response;
@property (retain, nonatomic) WCBaseNetworkingError *error;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)init;
- (void)startWithRequest:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
