@class WCFinderBgmListParams;

@interface WCFinderBgmListCgi : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderBgmListParams *params;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithParams:(id)a0 successfulBlock:(id /* block */)a1 failed:(id /* block */)a2;
- (void)start;
- (id)buildRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
