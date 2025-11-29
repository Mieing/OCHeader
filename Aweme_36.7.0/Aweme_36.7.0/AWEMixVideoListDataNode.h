@class NSString, AWEMixVideoModel, NSNumber;
@protocol AWEUserProFileAdVideoDataController;

@interface AWEMixVideoListDataNode : AWEListDataController <AWEMixVideoDetailPlayListDataControllerProtocol>

@property (nonatomic) unsigned long long nodeType;
@property (weak, nonatomic) AWEMixVideoListDataNode *prev;
@property (weak, nonatomic) AWEMixVideoListDataNode *next;
@property (nonatomic) BOOL hasFilteredData;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (retain, nonatomic) id<AWEUserProFileAdVideoDataController> adVideoDataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) NSString *mixVideoID;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL enabledLocalDataBase;

- (long long)lastEpisode;
- (void)syncWith:(id)a0;
- (id)sortArrayByExcuteDate:(id)a0;
- (void)resetDataForEpisode:(long long)a0;
- (void)mixInnerLoadMoreFromEpisode:(long long)a0 completion:(id /* block */)a1;
- (void)syncWithAwemeModels:(id)a0;
- (long long)firstEpisode;
- (id)awemeModelAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
