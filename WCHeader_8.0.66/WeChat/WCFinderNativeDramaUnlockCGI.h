@class WCFinderNativeDramaUnlockCGIParams;

@interface WCFinderNativeDramaUnlockCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderNativeDramaUnlockCGIParams *params;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithParams:(id)a0 successfulBlock:(id /* block */)a1 failed:(id /* block */)a2;
- (void)_setupRequest;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
