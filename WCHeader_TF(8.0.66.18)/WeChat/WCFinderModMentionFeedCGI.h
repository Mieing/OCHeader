@class NSString;

@interface WCFinderModMentionFeedCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithUserName:(id)a0 displayItems:(id)a1 unDisplayItems:(id)a2 successful:(id /* block */)a3 failed:(id /* block */)a4;
- (void)createRequestWithDisplayItems:(id)a0 unDisplayItems:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
