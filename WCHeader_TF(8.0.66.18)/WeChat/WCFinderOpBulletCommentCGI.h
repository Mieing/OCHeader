@class NSString;

@interface WCFinderOpBulletCommentCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long commentId;
@property (nonatomic) int opType;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithObjectId:(id)a0 objectNonceId:(id)a1 commentId:(unsigned long long)a2 opType:(int)a3 commentScene:(int)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
