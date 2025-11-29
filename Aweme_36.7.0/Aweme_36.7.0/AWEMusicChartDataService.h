@class NSMutableDictionary;

@interface AWEMusicChartDataService : NSObject

@property (retain, nonatomic) NSMutableDictionary *musicChartData;
@property (retain, nonatomic) NSMutableDictionary *musicListDic;

+ (id)shared;

- (id)getVideoOrderWithSessionId:(id)a0 itemId:(id)a1;
- (long long)getSongOrderWithSessionId:(id)a0 musicId:(id)a1;
- (BOOL)getIsFromHotMusicListWithSessionId:(id)a0;
- (void)loadMusicListWithWithSessionId:(id)a0 chartId:(id)a1 version:(id)a2 completion:(id /* block */)a3;
- (void)setVideoOrderWithSessionId:(id)a0 itemId:(id)a1;
- (void)clearCacheWithSessionId:(id)a0;
- (void)getMusicInfoWithSessionId:(id)a0 chartId:(id)a1 version:(id)a2 musicId:(id)a3 completion:(id /* block */)a4;
- (void)recordMusicLastIndexWithSessionId:(id)a0 musicId:(id)a1 itemId:(id)a2;
- (long long)getMusicLastIndexWithSessionId:(id)a0 musicId:(id)a1;
- (void)setIsFromHotMusicListWithSessionId:(id)a0;
- (void)loadMusicChartDetailWithSessionId:(id)a0 version:(id)a1 chartId:(id)a2 musicId:(id)a3 completion:(id /* block */)a4;
- (id)getMusicIdWithSessionId:(id)a0 itemId:(id)a1;
- (void)handleVideoFavoriteNotification:(id)a0;
- (id)produceEventAwemeInfoWithAwemeList:(id)a0;
- (void)requestMusicChartDetailWithSessionId:(id)a0 version:(id)a1 chartId:(id)a2 musicId:(id)a3 cursor:(id)a4 count:(id)a5 needMusicRank:(BOOL)a6 needMusic:(BOOL)a7 withChartMeta:(BOOL)a8 itemId:(id)a9 loadType:(long long)a10 completion:(id /* block */)a11;
- (void)initSessionIdKey:(id)a0 musicIdKey:(id)a1 data:(id)a2 version:(id)a3;
- (void)requestMusicListWithSessionId:(id)a0 ChartId:(id)a1 version:(id)a2 cursor:(id)a3 count:(id)a4 itemCount:(id)a5 withDetailUrl:(BOOL)a6 withChartMeta:(BOOL)a7 completion:(id /* block */)a8;
- (id)loadCacheWithSessionId:(id)a0 musicId:(id)a1;
- (id)getMusicWithSessionId:(id)a0 musicId:(id)a1;
- (id)getVersionWithSessionId:(id)a0;
- (BOOL)getHasMoreWithSessionId:(id)a0 musicId:(id)a1;
- (void)loadMoreMusicChartDetailWithSessionId:(id)a0 version:(id)a1 chartId:(id)a2 musicId:(id)a3 count:(id)a4 needMusicRank:(BOOL)a5 needMusic:(BOOL)a6 withChartMeta:(BOOL)a7 itemId:(id)a8 loadType:(long long)a9 scene:(long long)a10 completion:(id /* block */)a11;
- (void).cxx_destruct;
- (id)init;

@end
