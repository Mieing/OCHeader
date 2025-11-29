@class NSString, AWEMixVideoModel, AWEMixVideoListDataNode, NSMutableArray, NSNumber;
@protocol AWEUserProFileAdVideoDataController;

@interface AWEMixVideoRelatedListDataController : AWEMixVideoListDataController <AWEMixVideoRelatedListDataControllerProtocol>

@property (retain, nonatomic) NSMutableArray *currentRecommendCacheAwemeModel;
@property (nonatomic) BOOL skipLocalCache;
@property (copy, nonatomic) NSString *mixAuthorID;
@property (retain, nonatomic) AWEMixVideoListDataNode *currentNode;
@property (retain, nonatomic) AWEMixVideoListDataNode *currentRecommendNode;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (retain, nonatomic) id<AWEUserProFileAdVideoDataController> adVideoDataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) NSString *mixVideoID;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL hasFilteredData;
@property (nonatomic) BOOL enabledLocalDataBase;

- (void)setLoadmoreHasMore:(BOOL)a0;
- (BOOL)loadmoreHasMore;
- (void)setRefreshHasMore:(BOOL)a0;
- (void)setLoadPreviousHasPrevious:(BOOL)a0;
- (BOOL)refreshHasMore;
- (BOOL)loadPreviousHasPrevious;
- (void)setRefreshHasPrevious:(BOOL)a0;
- (BOOL)refreshHasPrevious;
- (void)setupRecommendDataWithDataType:(unsigned long long)a0;
- (void)fetchWithCount:(long long)a0 dataType:(unsigned long long)a1 pullType:(long long)a2 currentAwemeModel:(id)a3 completion:(id /* block */)a4;
- (void)fetchFinishSetDataSource:(id)a0 filteredArray:(id)a1 indexSet:(id)a2;
- (void)fetchWithCount:(long long)a0 dataType:(unsigned long long)a1 pullDown:(BOOL)a2 cursor:(id)a3 currentAwemeModel:(id)a4 completion:(id /* block */)a5 block:(id /* block */)a6;
- (void)resetCacheAwemeModel;
- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)a0;

@end
