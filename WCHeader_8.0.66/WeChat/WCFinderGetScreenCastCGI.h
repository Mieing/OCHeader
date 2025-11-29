@class NSString, NSMutableArray;

@interface WCFinderGetScreenCastCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSMutableArray *objectIds;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithObjectIds:(id)a0 username:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
