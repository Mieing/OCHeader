@class NSString, NSArray, AWEMusicPlayerQueue, AWEPlaylistInfoModel, NSNumber;
@protocol AWEPlaylistDetailHalfScreenViewModelDelegate;

@interface AWEPlaylistDetailHalfScreenViewModel : NSObject <AWEMusicStreamingQueueDelegate, AWEMusicStreamingQueueHandlerDelegate, AWEMusicDispatchPlaylistProtocol>

@property (copy, nonatomic) NSString *playlistID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL needPlaylistInfo;
@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) id<AWEPlaylistDetailHalfScreenViewModelDelegate> delegate;
@property (retain, nonatomic) NSArray *songList;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)filterModelsWithModels:(id)a0 handler:(id /* block */)a1;
- (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
- (id)queueHandler;
- (void)loadMoreCompletion:(id /* block */)a0;
- (void)queueHandler:(id)a0 changedOf:(id)a1 scene:(unsigned long long)a2;
- (id)initWithPlaylistId:(id)a0 secUserID:(id)a1;
- (double)musicCellHeight;
- (id)p_getCoverPicURL;
- (id)p_getPlayerList:(id)a0;
- (void)refreshCollectStatusWithCompletion:(id /* block */)a0;
- (double)musicHeaderHeight;
- (id)filterForQueueWithModels:(id)a0;
- (void)changeCollectStatusWithBlock:(id /* block */)a0;
- (id)p_getQueueName;
- (void).cxx_destruct;
- (BOOL)networkReachable;
- (id)loadCount;

@end
