@class NSString, NSArray;

@interface WCFinderBatchGetMentionInfoCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSArray *mentionIDList;
@property (nonatomic) long long requestScene;

- (id)initWithUserName:(id)a0 mentionIDList:(id)a1 requestScene:(long long)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
