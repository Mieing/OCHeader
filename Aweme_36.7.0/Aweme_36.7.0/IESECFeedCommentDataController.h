@class NSString, NSDictionary, NSMutableArray, NSNumber;

@interface IESECFeedCommentDataController : IESECListDataController

@property (nonatomic) long long currentPage;
@property (retain, nonatomic) NSMutableArray *insertIdsArray;
@property (copy, nonatomic) NSString *productID;
@property (retain, nonatomic) NSNumber *noticePosition;
@property (copy, nonatomic) NSString *noticeDesc;
@property (copy, nonatomic) NSString *kolID;
@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSString *fromKOLID;
@property (nonatomic) BOOL needFilterComments;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSNumber *meaninglessCount;
@property (copy, nonatomic) NSString *commentExtra;

+ (void)fetchFeedGoodsCommentListWithParameters:(id)a0 completion:(id /* block */)a1;
+ (void)updateCommentLikeWithCommentID:(id)a0 like:(BOOL)a1 replay:(BOOL)a2 completion:(id /* block */)a3;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
