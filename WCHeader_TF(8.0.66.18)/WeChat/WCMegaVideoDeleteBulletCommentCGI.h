@class NSString;

@interface WCMegaVideoDeleteBulletCommentCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (copy, nonatomic) NSString *deleteCommentId;
@property (copy, nonatomic) NSString *username;

- (id)initWithVideoId:(id)a0 videoNonceId:(id)a1 deleteCommentId:(id)a2 username:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createDelRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
