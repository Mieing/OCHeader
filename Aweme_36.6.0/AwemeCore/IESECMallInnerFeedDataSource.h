@class NSMutableDictionary, IESECMallInnerFeedNode;

@interface IESECMallInnerFeedDataSource : IESECListDataController

@property (nonatomic) long long cursor;
@property (nonatomic) long long pageNum;
@property (retain, nonatomic) NSMutableDictionary *mixedFeedRequestParams;
@property (retain, nonatomic) IESECMallInnerFeedNode *node;
@property (nonatomic) BOOL flagForPreloadData;
@property (nonatomic) long long dataCount;
@property (retain, nonatomic) NSMutableDictionary *hasShownCommentCountIndexMap;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchData:(id /* block */)a0;
- (void)insertPreloadFirstScreen:(id)a0;
- (id)getMixedFeedRequestParams;
- (void)modelTransformer:(id)a0;
- (void)insertPreloadCards:(id)a0;
- (void)insertPreloadFirstScreen:(id)a0 withCursor:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
