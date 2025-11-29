@class NSString, NSArray, AWEMusicPlayerQueue, AWEPlaylistInfoModel, NSNumber, AWEMusicDSPEventModel;
@protocol AWEPlaylistDataControllerBatchManageDelegate, AWEPlaylistDataControllerDelegate;

@interface AWEPlaylistDataController : NSObject <AWEMusicDispatchPlaylistProtocol, AWEMusicStreamingQueueHandlerDelegate, AWEMusicStreamingQueueDelegate>

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *playlistID;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (nonatomic) BOOL needPlaylistInfo;
@property (copy, nonatomic) NSString *secUserID;
@property (weak, nonatomic) id<AWEPlaylistDataControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEPlaylistDataControllerBatchManageDelegate> batchManageDelegate;
@property (retain, nonatomic) NSArray *songList;
@property (retain, nonatomic) NSArray *manageSongList;
@property (readonly, nonatomic) NSArray *queueList;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) unsigned long long playlistCategory;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)needRecordLoopMode:(id)a0;
- (void)loadMoreAppend:(id)a0 original:(id)a1;
- (id)titleForPlayerOfQueueId:(id)a0;
- (void)filterModelsWithModels:(id)a0 handler:(id /* block */)a1;
- (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
- (void)playlistSongsChangedWithType:(unsigned long long)a0 playlistId:(id)a1 changeModels:(id)a2 from:(id)a3;
- (id)queueHandler;
- (void)loadMoreCompletion:(id /* block */)a0;
- (void)queueHandler:(id)a0 changedOf:(id)a1 scene:(unsigned long long)a2;
- (id)reorderedMusics;
- (void)applyThenCleanReorderedSongs;
- (void)cleanManageSongList;
- (void)deleteBatchManagedSongsAtIndexes:(id)a0 eventUtil:(id)a1 completion:(id /* block */)a2;
- (id)initWithPlaylistId:(id)a0 secUserID:(id)a1;
- (void)addOriginalSongModel:(id)a0;
- (void)deleteLocalSongModel:(id)a0;
- (void)deleteSongAtIndex:(long long)a0 completion:(id /* block */)a1;
- (id)p_getCoverPicURL;
- (void)deleteLocalSongModels:(id)a0;
- (id)p_queueName;
- (id)p_sceneName;
- (id)p_getPlayerList:(id)a0;
- (void)deletePlaylistCompletion:(id /* block */)a0;
- (void)playlistCollectionStatusChangedTo:(BOOL)a0;
- (void)reloadCollectionCountWhenCollectTrrigerLogin;
- (void).cxx_destruct;
- (id)loadCount;

@end
