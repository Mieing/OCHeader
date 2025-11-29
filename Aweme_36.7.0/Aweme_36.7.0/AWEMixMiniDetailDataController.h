@class NSString, AWEAwemeModel, AWEMixVideoListDataNode, AWEMixVideoModel, NSNumber;
@protocol AWEUserProFileAdVideoDataController;

@interface AWEMixMiniDetailDataController : AWEMixVideoListDataController <AWEMixMiniDetailDataControllerProtocol>

@property (nonatomic) long long requestNums;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *itemId;
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

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCount:(long long)a0 dataType:(unsigned long long)a1 pullDown:(BOOL)a2 cursor:(id)a3 currentAwemeModel:(id)a4 completion:(id /* block */)a5 block:(id /* block */)a6;
- (void)fetchWithCount:(long long)a0 pullType:(long long)a1 currentAwemeModel:(id)a2 completion:(id /* block */)a3;
- (void)trackListRefreshWithRequestDuration:(double)a0 list:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
