@class NSString, NSMutableDictionary, AWEAwemeModel, NSArray, NSNumber, NSMutableArray;

@interface AWEFavoriteFileVideoDataController : AWEListDataController <AWEFavoriteFileVideoDataControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *initialModelIndexDict;
@property (nonatomic) BOOL hasRequiredData;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) BOOL isVideoListEmpty;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSNumber *collectsId;
@property (copy, nonatomic) NSString *collectsName;
@property (nonatomic) long long pageSize;
@property (copy, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long initFecthCount;
@property (nonatomic) long long initialId;
@property (copy, nonatomic) AWEAwemeModel *initialModel;
@property (copy, nonatomic) NSArray *initialModels;
@property (retain, nonatomic) NSMutableArray *dataLoadingCompletionBlockArray;
@property (copy, nonatomic) id /* block */ syncAwemeVCBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (void)endTimingWithLoadMore:(BOOL)a0;
- (void)errorHmdTrackWithTrackService:(id)a0 WithStatusCode:(id)a1 isModelNull:(BOOL)a2 NSError:(id)a3;
- (void)hmdTrackServiceWithStatusCode:(id)a0 withLogid:(id)a1 withTrackService:(id)a2;
- (id)initWithCollectsId:(id)a0 withCollectsName:(id)a1;
- (void)refreshWithCollectsId:(id)a0 block:(id /* block */)a1;
- (void)postCollectsStats:(long long)a0 collectsId:(id)a1 completion:(id /* block */)a2;
- (long long)videoCountForInitFetch;
- (void)invokeDataLoadingCompletionBlocks:(id)a0;
- (id)rearrangeFirstRequiredAwemeList:(id)a0;
- (id)filteredAwemeList:(id)a0 currentDataSource:(id)a1;
- (void).cxx_destruct;
- (id)dataSource;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)removeItemsAtIndexPaths:(id)a0;

@end
