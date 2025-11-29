@class AWEListDataController, NSMutableDictionary, NSMutableArray, NSNumber, NSObject;
@protocol OS_dispatch_queue, AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWEMixVideoLocalDataBase : AWEListDataController

@property (retain, nonatomic) NSNumber *episodeRequestOnAir;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixDataQueue;
@property (retain, nonatomic) NSMutableDictionary *localDataDict;
@property (retain, nonatomic) NSNumber *episodePreRequestOnAir;
@property (retain, nonatomic) NSMutableDictionary *episodeDictRequestOnAir;
@property (retain, nonatomic) NSNumber *lastEpisodeRequest;
@property (weak, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *delegate;
@property (retain, nonatomic) NSMutableArray *filteredEpisode;
@property (nonatomic) BOOL enabledLocalDataBase;
@property (nonatomic) BOOL hasFilteredData;

- (void)loadMoreFromEpisode:(long long)a0 completion:(id /* block */)a1;
- (void)resetDataForEpisode:(long long)a0;
- (void)syncWithAwemeModels:(id)a0;
- (BOOL)isLocalDataExistsFromEpisode:(long long)a0;
- (BOOL)fixCurrentRequestOnAir:(BOOL)a0;
- (void)loadMoreFromEpisode:(long long)a0 skipLocalCache:(BOOL)a1 reqFrom:(id)a2 completion:(id /* block */)a3;
- (void)requestMixVideoDetailList:(id)a0 cursor:(id)a1 count:(id)a2 pullDown:(BOOL)a3 skipLocalCache:(BOOL)a4 reqFrom:(id)a5 completeBlock:(id /* block */)a6;
- (void)loadSegmentFromEpisode:(long long)a0 skipLocalCache:(BOOL)a1 reqFrom:(id)a2 completion:(id /* block */)a3;
- (void)preloadMoreFromEpisode:(long long)a0 skipLocalCache:(BOOL)a1 reqFrom:(id)a2;
- (long long)getFetchCount;
- (void)recodeFilteredEpisodeEpisodeForList:(id)a0 cursor:(id)a1 count:(id)a2 refresh:(BOOL)a3;
- (void)storeToLocalDataDictionaryWithModelArray:(id)a0;
- (void)resetForEpisode:(long long)a0 withLoadMoreList:(id)a1;
- (void)reconfigDataSourceForEpisode:(long long)a0;
- (void)mixInnerResetDataForEpisode:(long long)a0;
- (id)mixVideoMaxEpisodeForList:(id)a0;
- (id)dataSourceForEpisode:(long long)a0 isLoadMore:(BOOL)a1;
- (id)dataArrayForEpisode:(long long)a0 isLoadMore:(BOOL)a1;
- (id)createLocalListModelIfNeedForCursor:(id)a0 count:(id)a1 refresh:(BOOL)a2;
- (void)fixMaxCursorForListModel:(id)a0;
- (void)handleDataSourceWithFilteredDataSource:(id)a0;
- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)a0;

@end
