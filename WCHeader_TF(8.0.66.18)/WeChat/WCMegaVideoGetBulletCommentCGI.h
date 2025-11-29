@class NSString, NSData;

@interface WCMegaVideoGetBulletCommentCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long videoTimeStamp;

- (id)initWithVideoId:(id)a0 videoNonceId:(id)a1 videoTimeStamp:(unsigned long long)a2 lastBuffer:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
