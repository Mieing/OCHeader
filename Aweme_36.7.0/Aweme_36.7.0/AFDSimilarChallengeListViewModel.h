@class NSString, NSArray, NSError, AFDSimilarChallengeListDataController;

@interface AFDSimilarChallengeListViewModel : NSObject <AFDSimilarChallengeListViewModelProtocol>

@property (retain, nonatomic) AFDSimilarChallengeListDataController *dataController;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSString *trackTabId;
@property (nonatomic) long long dataState;
@property (copy, nonatomic) NSArray *allSimilarChallenges;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *logPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)updateCurrentSimilarChallengs;
- (void)trackDidClickChallengeCell:(long long)a0;
- (void).cxx_destruct;
- (void)fetchData;

@end
