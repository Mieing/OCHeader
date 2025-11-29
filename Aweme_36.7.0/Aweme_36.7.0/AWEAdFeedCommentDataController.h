@class AWEAdFeedCommentsAdInfo, NSArray, NSDictionary, AWEAwemeModel, NSString, NSNumber, AWEAdFeedCommentFilterModel;

@interface AWEAdFeedCommentDataController : AWEListDataController

@property (nonatomic) long long currentPage;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSArray *filterList;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAdFeedCommentFilterModel *filterModel;
@property (retain, nonatomic) AWEAdFeedCommentsAdInfo *adInfo;
@property (nonatomic) BOOL showTopComment;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSNumber *pinnedID;
@property (copy, nonatomic) NSString *tip;

+ (void)fetchFeedCommentListWithParameters:(id)a0 completion:(id /* block */)a1;
+ (void)updateCommentLikeWithCommentID:(id)a0 like:(BOOL)a1 completion:(id /* block */)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (id)handleModelDataWithList:(id)a0;
- (void)insertTopCommentViewModelIfNeed;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
