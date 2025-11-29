@class NSString, AWEPlaylistInfoModel, AWEMusicPlayerQueue, NSDictionary, NSNumber, NSObject;
@protocol MusicService, AWEMusicStreamingQueueDelegate, AWEMusicFeedPlayerDelegate;

@interface AWEMusicSearchService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate>

@property (nonatomic) BOOL isRequesting;
@property (readonly, nonatomic) AWEMusicPlayerQueue *queue;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long reqCount;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (weak, nonatomic) id<AWEMusicStreamingQueueDelegate> queueDelegate;
@property (weak, nonatomic) id<AWEMusicFeedPlayerDelegate> playerDelegate;
@property (nonatomic) BOOL needRelatedReco;
@property (nonatomic) BOOL stopWhenExit;
@property (retain, nonatomic) NSString *playlistId;
@property (nonatomic) BOOL enableRepeatRequest;
@property (weak, nonatomic) NSObject<MusicService> *musicService;
@property (retain, nonatomic) NSDictionary *relatedTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedViewDidLoad:(id)a0;
- (BOOL)enableCycleToFirst;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isCustomAddToQueueModel;
- (BOOL)needRecordLoopMode:(id)a0;
- (void)feedDidRetry:(id)a0;
- (void)feed:(id)a0 didDismissAnimation:(BOOL)a1;
- (void)feedGoBackDidTapped:(id)a0;
- (id)p_request;
- (id)queueHandler;
- (id)viewModelsFromResponse:(id)a0 forPlay:(BOOL)a1;
- (void)p_queryPlaylistResponseBlock:(id /* block */)a0 completion:(id /* block */)a1 repeatTimes:(long long)a2;
- (void)p_queryRelatedResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
