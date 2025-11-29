@class SnsWithTaOpResponse, WCBaseNetworkingError;

@interface WCTogetherModifyCGI : WCBaseCgi

@property (retain, nonatomic) SnsWithTaOpResponse *response;
@property (retain, nonatomic) WCBaseNetworkingError *error;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
