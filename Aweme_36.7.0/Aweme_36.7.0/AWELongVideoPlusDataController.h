@class NSMutableDictionary, NSString, AWEAwemeModel, NSNumber;
@protocol AWEHttpTask;

@interface AWELongVideoPlusDataController : AWEListDataController <AWELongVideoPlusDataControllerProtocol>

@property (retain, nonatomic) Class longVideoDataService;
@property (weak, nonatomic) id<AWEHttpTask> updateMetaInfoTask;
@property (weak, nonatomic) id<AWEHttpTask> requestAwemodelTask;
@property (weak, nonatomic) id<AWEHttpTask> requestWidgetListTask;
@property (retain, nonatomic) NSMutableDictionary *awemeModelListMap;
@property (retain, nonatomic) NSMutableDictionary *metaInfoMap;
@property (retain, nonatomic) NSMutableDictionary *episodeListMap;
@property (retain, nonatomic) NSMutableDictionary *awemeListCursorMap;
@property (retain, nonatomic) NSMutableDictionary *episodeListCursorMap;
@property (retain, nonatomic) NSMutableDictionary *isUpdateAwemeHasMoreMap;
@property (retain, nonatomic) NSMutableDictionary *isUpdateEpisodeHasMoreMap;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAwemeModelListInfoWithAlbumID:(id)a0 seriesID:(id)a1 cursor:(long long)a2 count:(long long)a3 completion:(id /* block */)a4;
- (void)clearLongVideoData;
- (void)didReceivePaidNotification:(id)a0;
- (void)cancelAllTask;
- (void)setEpisodeListCursorMapWithAlbumID:(id)a0 cursor:(id)a1 minCursor:(id)a2 hasMore:(BOOL)a3;
- (id)sortArrayByRank:(id)a0;
- (id)sortSeriesByRank:(id)a0;
- (id)filterEpisodeListArrayWithFirst:(id)a0 second:(id)a1;
- (id)sortArrayByEpisodeRank:(id)a0;
- (void)updateMetaInfoWithAlbumID:(id)a0 episodeID:(id)a1 awemeID:(id)a2 cursor:(long long)a3 count:(long long)a4 completion:(id /* block */)a5;
- (void)resetAwemeModelListInfoWithAlbumID:(id)a0 seriesID:(id)a1 cursor:(long long)a2 count:(long long)a3 completion:(id /* block */)a4;
- (void)updateEpisodeListInfoWithAlbumID:(id)a0 cursor:(long long)a1 count:(long long)a2 completion:(id /* block */)a3;
- (long long)getLVPMetaCount;
- (long long)getLVPEpisodeCount;
- (long long)getLVPAwemeListCount;
- (void).cxx_destruct;
- (id)init;

@end
