@class NSString, NSData;

@interface WCFinderGetFoldListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *targetUsername;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceid;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSData *lastBuff;

- (id)initWithLastBuff:(id)a0 friendUsername:(id)a1 objectID:(id)a2 nonceID:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
