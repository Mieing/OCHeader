@class WCFinderGetBulletCommentCGIParams;

@interface WCFinderGetBulletCommentCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderGetBulletCommentCGIParams *params;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithParams:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
