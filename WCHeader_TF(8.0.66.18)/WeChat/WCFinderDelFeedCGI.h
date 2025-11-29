@class NSString;

@interface WCFinderDelFeedCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *posterName;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) int delScene;
@property (nonatomic) int feedSourceScene;
@property (copy, nonatomic) NSString *clientId;

- (id)initWithFeedTid:(id)a0 nonceID:(id)a1 clientId:(id)a2 posterName:(id)a3 delScene:(int)a4 feedSourceScene:(int)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
