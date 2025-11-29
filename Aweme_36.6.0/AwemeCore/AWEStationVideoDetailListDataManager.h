@class NSNumber, NSString, AWEAwemeModel;

@interface AWEStationVideoDetailListDataManager : AWEListDataController <AWEUserMessage>

@property (copy, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEAwemeModel *justRemovedModel;
@property (copy, nonatomic) NSString *ironManId;
@property (copy, nonatomic) NSString *hashTagName;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long pageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMore:(id /* block */)a0;
- (BOOL)canLoadMore;
- (void)removeWithItemID:(id)a0;
- (void)addAwemeWithItemID:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
