@class NSString, NSMutableDictionary, IESECMallInnerFeedNode;

@interface IESECMallInnerFeedNewDataSource : IESECListDataController

@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *postBack;
@property (nonatomic) long long pageNum;
@property (retain, nonatomic) NSMutableDictionary *mixedFeedRequestParams;
@property (retain, nonatomic) IESECMallInnerFeedNode *node;
@property (nonatomic) long long dataCount;
@property (retain, nonatomic) NSMutableDictionary *hasShownCommentCountIndexMap;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchData:(id /* block */)a0;
- (void)insertPreloadFirstScreen:(id)a0;
- (id)getMixedFeedRequestParams;
- (void)insertPreloadFirstScreen:(id)a0 withCursor:(id)a1 postBack:(id)a2;
- (void)insertPreloadCards:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
