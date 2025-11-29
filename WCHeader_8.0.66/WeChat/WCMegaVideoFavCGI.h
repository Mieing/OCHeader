@class NSString;

@interface WCMegaVideoFavCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (nonatomic) BOOL isFav;

- (id)initVideoFavCGIWith:(id)a0 videoNonceId:(id)a1 isFav:(BOOL)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
