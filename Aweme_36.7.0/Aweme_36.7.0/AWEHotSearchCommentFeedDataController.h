@class NSNumber, NSString, AWEHotSearchCommentFeedParamsModel;

@interface AWEHotSearchCommentFeedDataController : AWEListDataController

@property (retain, nonatomic) AWEHotSearchCommentFeedParamsModel *paramsModel;
@property (retain, nonatomic) NSNumber *eventDiscussID;
@property (copy, nonatomic) NSString *userVoteInfo;
@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) BOOL enentIDInserted;
@property (nonatomic) BOOL voteIsEmphasis;
@property (copy, nonatomic) id /* block */ contextUpdateBlock;
@property (copy, nonatomic) id /* block */ updateUserVoteBlock;
@property (nonatomic) BOOL isPreLoad;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id /* block */)isEqualBlock;
- (id)requestURLString;
- (void)reloadListWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)loadDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)paramsWithPullType:(long long)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 requestId:(id)a1;
- (void)configVoteInfoWithCardList:(id)a0 userVoteTags:(id)a1;
- (id)itemIDForCardModel:(id)a0;
- (void)updateWithContext:(id)a0 tabType:(long long)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
