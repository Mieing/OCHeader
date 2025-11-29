@class WCFinderSearchEventRequestParams;

@interface WCFinderSearchEventCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderSearchEventRequestParams *params;

- (id)initWithParams:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)_createRequestWithParams:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
