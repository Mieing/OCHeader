@class NSString, NSMutableArray;

@interface AWETeenAlbumCollectListDataController : AWEListDataController

@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *pageToken;
@property (retain, nonatomic) NSMutableArray *justRemovedModelList;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_loadAlbumCollectListCompletion:(id /* block */)a0;
- (BOOL)addAwemeWithAlbumID:(id)a0;
- (void)removeWithAlbumID:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
