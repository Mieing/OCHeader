@class NSString, NSDictionary;

@interface AFDSimilarChallengeListDataController : AWEListDataController

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSDictionary *logPassback;

- (void)monitorFetchResultEmptyWithError:(id)a0 requestId:(id)a1;
- (void)fetchChallengsWithKeyword:(id)a0 cursor:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
