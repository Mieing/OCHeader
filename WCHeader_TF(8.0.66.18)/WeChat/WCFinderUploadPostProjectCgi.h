@class WCFinderUploadPostProjectCgiParams;

@interface WCFinderUploadPostProjectCgi : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderUploadPostProjectCgiParams *params;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithParams:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
