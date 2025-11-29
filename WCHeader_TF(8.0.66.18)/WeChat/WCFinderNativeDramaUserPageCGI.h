@class WCFinderNativeDramaUserPageCGIParams;

@interface WCFinderNativeDramaUserPageCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderNativeDramaUserPageCGIParams *params;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithParams:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)_setupRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
