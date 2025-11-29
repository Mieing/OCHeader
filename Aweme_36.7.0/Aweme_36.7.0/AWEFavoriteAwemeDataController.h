@class NSString, AWEAwemeModel, NSNumber, AWEUserModel;

@interface AWEFavoriteAwemeDataController : AWEListDataController <AWEUserMessage, AFDPureModePageMutiModelSourceProtocol, AWEProfileBatchChooseWorkDataControllerProtocol>

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEAwemeModel *justRemovedModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long pageSize;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)pureModeMaxCursor;
- (BOOL)pureModeHasMore;
- (id)pureModeOriginModelList;
- (id)getExpectedSizeInfo;
- (BOOL)removeWithItemID:(id)a0;
- (void)errorHmdTrackWithTrackService:(id)a0 WithStatusCode:(id)a1 isModelNull:(BOOL)a2 NSError:(id)a3 withEnterFrom:(id)a4;
- (void)hmdTrackServiceWithStatusCode:(id)a0 withLogid:(id)a1 withTrackService:(id)a2 withEnterFrom:(id)a3;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)removeItemsAtIndexPaths:(id)a0 completion:(id /* block */)a1;
- (void)syncWithCursor:(id)a0 hasMore:(BOOL)a1 dataList:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasMore;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
