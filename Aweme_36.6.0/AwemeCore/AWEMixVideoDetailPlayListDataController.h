@class NSString, AWEMixVideoLocalDataBase, AWEMixVideoModel, NSObject, NSNumber;
@protocol OS_dispatch_queue, AWEUserProFileAdVideoDataController;

@interface AWEMixVideoDetailPlayListDataController : AWEListDataController <AWEMixVideoDetailPlayListDataControllerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixDataQueue;
@property (retain, nonatomic) AWEMixVideoLocalDataBase *localDataBase;
@property (nonatomic) BOOL isNeedMarkMulti;
@property (nonatomic) BOOL hasFilteredData;
@property (retain, nonatomic) id<AWEUserProFileAdVideoDataController> adVideoDataController;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) NSString *mixVideoID;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL enabledLocalDataBase;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)loadMoreFromEpisode:(long long)a0 completion:(id /* block */)a1;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)syncWith:(id)a0;
- (id)sortArrayByExcuteDate:(id)a0;
- (void)resetDataForEpisode:(long long)a0;
- (void)mixInnerLoadMoreFromEpisode:(long long)a0 completion:(id /* block */)a1;
- (void)syncWithAwemeModels:(id)a0;
- (void)trackCompilationListMonitorWithModel:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setDataSource:(id)a0;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
