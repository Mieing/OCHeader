@class NSString, NSArray, AWEMusicPlayerQueue, AWEUserModel, LunaForceInsertRecord, NSDictionary, NSMutableArray, AWEStorage, AWEMusicFeedViewModel, AWEMusicStreamingQueueHandler;
@protocol MusicService;

@interface LunaRecommendDataSource : NSObject <AWEMusicStreamingQueueDelegate, AWEMusicServiceDelegate, AWEMusicDispatchLunaV2Protocol, AWEMusicDispatchCollectionProtocol, AWEMusicPlayerQueueDelegate, LunaSubscriberServiceDelegate>

@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (weak, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long feedRequestCount;
@property (nonatomic) BOOL hasCache;
@property (nonatomic) long long maxSongCount;
@property (copy, nonatomic) NSArray *forceInsertTrackIdList;
@property (copy, nonatomic) NSString *forceInsertVideoID;
@property (nonatomic) BOOL isForceInsertVideo;
@property (copy, nonatomic) NSString *forceInsertSongCoverAnchorType;
@property (retain, nonatomic) AWEMusicFeedViewModel *forceInsertModel;
@property (retain, nonatomic) LunaForceInsertRecord *forceInsertRecord;
@property (retain, nonatomic) AWEStorage *lunaStorage;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) BOOL isUseCache;
@property (retain, nonatomic) NSMutableArray *diversionList;
@property (nonatomic) long long currentPlayCount;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) AWEMusicStreamingQueueHandler *queueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendRequestQueueParams:(id)a0;

- (void)musicServiceMusicWillChange:(id)a0;
- (void)queueDidUpdatePlayList:(id)a0;
- (BOOL)enableCycleToFirst;
- (BOOL)hasForceInsert;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)needRecordLoopMode:(id)a0;
- (void)reactLoadMoreFeedWithResponseCount:(long long)a0 responseFilteredCount:(long long)a1 queueName:(id)a2;
- (id)titleForPlayerOfQueueId:(id)a0;
- (id)subTitleForPlayerOfQueueId:(id)a0;
- (void)filterModelsWithModels:(id)a0 handler:(id /* block */)a1;
- (id)initWithUserModel:(id)a0 musicService:(id)a1 extraInfo:(id)a2;
- (id)p_request;
- (void)resetWithModels:(id)a0 currentModel:(id)a1;
- (void)luna_onUserSubscriberStatusChanged:(unsigned long long)a0;
- (void)modelCollectionTypeChanged:(id)a0;
- (void)lunaV2Update:(id)a0 isFromCache:(BOOL)a1;
- (void)lunaV2UpdateFinish:(id)a0 isFromCache:(BOOL)a1;
- (id)viewModelsFromResponse:(id)a0 forPlay:(BOOL)a1;
- (void)requestSongModelsCompletion:(id /* block */)a0;
- (void)updateStorage;
- (void)updateCurrentModel:(id)a0 needPlay:(BOOL)a1;
- (id)queryListFromCache;
- (id)p_currentDay;
- (void)queryFeedListResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)queryInsertItemWithShowDiversionAnchor:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)p_queryCachedList;
- (void)queryRecommendResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)p_queueParams;
- (long long)maxSongCountLimit;
- (id)p_buildDiversionModel;
- (void)resetAndForceInsert:(id)a0 needPlay:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear;

@end
