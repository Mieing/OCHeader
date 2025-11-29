@class NSString, WCFinderModUserInfoParams;

@interface WCFinderModUserInfoCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderModUserInfoParams *params;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithUsername:(id)a0 params:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
