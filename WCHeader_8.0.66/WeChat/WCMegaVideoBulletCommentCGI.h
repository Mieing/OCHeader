@class NSString;

@interface WCMegaVideoBulletCommentCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (nonatomic) long long videoTimestamp;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL isAuthorView;

- (id)initWithVideoId:(id)a0 videoNonceId:(id)a1 videoTimestamp:(unsigned long long)a2 content:(id)a3 username:(id)a4 isAuthorView:(BOOL)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (void)createPostRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
