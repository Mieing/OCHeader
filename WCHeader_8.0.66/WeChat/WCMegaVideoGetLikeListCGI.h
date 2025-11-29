@class NSData;

@interface WCMegaVideoGetLikeListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSData *lastBuffer;

- (id)initWithLastBuffer:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
