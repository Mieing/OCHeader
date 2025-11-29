@class NSString;

@interface WCFinderPostBulletCommentCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long followBulletCommentId;
@property (nonatomic) unsigned long long videoTimestamp;
@property (nonatomic) int contentType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int commentSource;
@property (nonatomic) int postIdentity;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithRequestBlock:(id /* block */)a0 commentScene:(unsigned long long)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
