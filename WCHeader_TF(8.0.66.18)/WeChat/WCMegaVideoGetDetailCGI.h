@class NSString;

@interface WCMegaVideoGetDetailCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (copy, nonatomic) NSString *encryptedVideoId;
@property (nonatomic) unsigned int scene;

- (id)initWithVideoId:(id)a0 videoNonceId:(id)a1 encryptedVideoId:(id)a2 scene:(long long)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
