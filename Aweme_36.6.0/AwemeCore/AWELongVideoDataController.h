@class NSString, AWELVideoAlbumHistoryInfoModel, NSArray, NSMutableDictionary, NSDictionary, AWELongVideoPrefetchAwemeBundle, AWELongVideoPrefetchMetaInfoBundle, AWELongVideoAlbumModel;
@protocol AWEHttpTask;

@interface AWELongVideoDataController : AWEListDataController <AWELongVideoDataControllerProtocol>

@property (retain, nonatomic) Class longVideoDataService;
@property (weak, nonatomic) id<AWEHttpTask> updateMetaInfoTask;
@property (weak, nonatomic) id<AWEHttpTask> requestAwemeModelTask;
@property (weak, nonatomic) id<AWEHttpTask> requestWidgetListTask;
@property (retain, nonatomic) AWELongVideoAlbumModel *currentAlbumModel;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *albumWatchHistory;
@property (copy, nonatomic) NSArray *albumModelList;
@property (copy, nonatomic) NSArray *widgetList;
@property (retain, nonatomic) NSMutableDictionary *preloadEpisodeMapAwemeDict;
@property (retain, nonatomic) NSString *currentEpisodeID;
@property (retain, nonatomic) AWELongVideoPrefetchAwemeBundle *prefetchAwemeBundle;
@property (retain, nonatomic) AWELongVideoPrefetchMetaInfoBundle *prefetchMetaInfoBundle;
@property (copy, nonatomic) NSDictionary *metaLogPassback;
@property (copy, nonatomic) NSDictionary *screenCastUiSettings;
@property (nonatomic) BOOL isLoadingAlbum;
@property (readonly, nonatomic) long long albumEpisodeType;
@property (copy, nonatomic) id /* block */ willStartRequestLongVideoAwemeBlock;
@property (copy, nonatomic) id /* block */ didFinishRequestLongVideoAwemeBlock;
@property (copy, nonatomic) id /* block */ willStartRequestLongVideoMetaBlock;
@property (copy, nonatomic) id /* block */ didFinishRequestLongVideoMetaBlock;
@property (copy, nonatomic) id /* block */ requestLongVideoAwemeHitPrefetchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needRequestPreload;

- (void)submitVideoHistoryWithModel:(id)a0 time:(double)a1;
- (id)currentEpisodeWithCurrentEpisodeID:(id)a0;
- (void)loadScreenCastUiSettingWith:(id)a0;
- (void)loadAwemeModelWithEpisodeID:(id)a0 completion:(id /* block */)a1;
- (void)fetchLongVideoWidgetMetaInfoWithAlbumID:(id)a0 episodeID:(id)a1 completion:(id /* block */)a2;
- (id)nextEpisodeWithCurrentEpisodeID:(id)a0;
- (void)cleanPreloadAwemeModel;
- (void)preloadAwemeModel;
- (id)getAwemeIds:(id)a0 modelNum:(long long)a1;
- (void)loadAwemeModelWithEpisodeID:(id)a0 albumID:(id)a1 awemeIDs:(id)a2 bizParams:(id)a3 completion:(id /* block */)a4;
- (id)getPreloadAwemeModel:(id)a0;
- (void)loadNextAwemeModelIfNeededWithCurrentEpisodeID:(id)a0 albumID:(id)a1 awemeIDs:(id)a2 bizParams:(id)a3;
- (void)savePreloadAwemeModel:(id)a0;
- (id)loadAwemeModelListWithActionType:(long long)a0 albumID:(id)a1 bizParams:(id)a2 completion:(id /* block */)a3;
- (id)updateMetaInfoWithAlbumID:(id)a0 isFromTheater:(BOOL)a1 requestFrom:(long long)a2 completion:(id /* block */)a3;
- (void)loadAwemeModelWithAlbumID:(id)a0 completion:(id /* block */)a1;
- (void)loadAwemeModelForLanguageWithAlbumID:(id)a0 lastAlbumID:(id)a1 lastEpisodeID:(id)a2 completion:(id /* block */)a3;
- (void)loadAwemeModelWithHighLightEpisodeID:(id)a0 albumID:(id)a1 episodeID:(id)a2 awemeIDs:(id)a3 bizParams:(id)a4 completion:(id /* block */)a5;
- (unsigned long long)currentEpisodeIndexWithCurrentEpisodeID:(id)a0;
- (id)getSeriesAlbumInfoWithAlbumID:(id)a0;
- (void)loadLongVideoWatchHistoryWithAlbumID:(id)a0 completion:(id /* block */)a1;
- (void)clearLongVideoData;
- (void)prefetchLongVideoAwemeModelWithAwemeID:(id)a0 albumID:(id)a1 episodeID:(id)a2 bizParams:(id)a3 highlightEpisodeID:(id)a4;
- (void)prefetchLongVideoAlbumModelWithAlbumID:(id)a0 isFromTheater:(BOOL)a1 requestFrom:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
