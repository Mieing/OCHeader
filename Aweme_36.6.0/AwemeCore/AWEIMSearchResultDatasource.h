@class AWEIMMessageConversation, NSString, NSDictionary, NSArray, AWEIMBatchFetchUserSession, RxCollectionViewDiffableDataSource;

@interface AWEIMSearchResultDatasource : NSObject <AWEIMBatchFetchUserSessionDelegate, AWEIMSearchInputProtocol>

@property (nonatomic) long long searchTag;
@property (retain, nonatomic) NSDictionary *dataMap;
@property (nonatomic) long long filtedResultCount;
@property (retain, nonatomic) AWEIMBatchFetchUserSession *fetchUserSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) RxCollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *searchText;
@property (retain) NSArray *moreResults;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *lastSortOrderDict;
@property (copy) NSArray *messageCount;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void)loadMoreData;
- (void)batchFetchUserSessionDidFinished:(id)a0;
- (void)renderSearchTag:(long long)a0 searchResult:(id)a1;
- (void)searchText:(id)a0 completeBlock:(id /* block */)a1;
- (id)__cellModelForResult:(id)a0;
- (void)__renderSearchMessagesResultMap:(id)a0 searchType:(long long)a1 toSnapshot:(id)a2 limited:(BOOL)a3;
- (void)__renderSearchResultMap:(id)a0 searchType:(long long)a1 toSnapshot:(id)a2 limited:(BOOL)a3;
- (void)p_appendHomeSearchEntranceIntoSnapshot:(id)a0;
- (id)__cellHeaderItemForSearchType:(long long)a0 contentCount:(long long)a1;
- (id)p_cellModelForHomeSearchWithKeyword:(id)a0;
- (id)p_headerModelForHomeSearchWithContentCount:(long long)a0;
- (void).cxx_destruct;

@end
