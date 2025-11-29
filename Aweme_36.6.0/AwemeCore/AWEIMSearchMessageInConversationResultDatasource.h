@class AWEIMMessageConversation, NSString, NSDictionary, NSArray, AWEIMBatchFetchUserSession, RxCollectionViewDiffableDataSource;

@interface AWEIMSearchMessageInConversationResultDatasource : NSObject <AWEIMBatchFetchUserSessionDelegate, AWEIMSearchInputProtocol>

@property (nonatomic) long long searchTag;
@property (retain, nonatomic) NSDictionary *dataMap;
@property (nonatomic) long long filtedResultCount;
@property (retain, nonatomic) AWEIMBatchFetchUserSession *fetchUserSession;
@property (nonatomic) BOOL showHeader;
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
- (void)__renderSearchResultMap:(id)a0 inConversation:(id)a1 searchType:(long long)a2 toSnapshot:(id)a3 count:(long long)a4;
- (void)p_applySnapshot:(id)a0;
- (id)filterAndSortResultDatas:(id)a0;
- (void)appendResult:(id)a0;
- (id)__cellModelForResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
