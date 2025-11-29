@class NSString, NSMutableDictionary;

@interface AWEMusicStreamingQueuesHandler : NSObject <AWEMusicStreamingQueueDelegate>

@property (retain, nonatomic) NSMutableDictionary *queues;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableDictionary *cursorMap;
@property (retain, nonatomic) NSMutableDictionary *hasMoreMap;
@property (nonatomic) unsigned long long feedRequestCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)needRecordLoopMode:(id)a0;
- (void)reactLoadMoreFeedWithResponseCount:(long long)a0 responseFilteredCount:(long long)a1 queueName:(id)a2;
- (id)titleForPlayerOfQueueId:(id)a0;
- (id)subTitleForPlayerOfQueueId:(id)a0;
- (id)initWithQueueNames:(id)a0 secUserID:(id)a1 userName:(id)a2;
- (id)queueModelForQueueName:(id)a0;
- (void)resetWithModels:(id)a0 currentModel:(id)a1 forQueue:(id)a2;
- (id)queueHandlerOfQueueName:(id)a0;
- (BOOL)hasMoreOf:(id)a0;
- (id)loadMoreCountForQueue:(id)a0;
- (void)updateHasMore:(BOOL)a0 queueType:(id)a1;
- (void)updateCursor:(id)a0 queueType:(id)a1;
- (id)viewModelsFromMediaModels:(id)a0 queueType:(id)a1;
- (id)cursorOf:(id)a0;
- (void)appendModels:(id)a0 forQueue:(id)a1 cursor:(id)a2 hasMore:(BOOL)a3 totalCount:(long long)a4;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (void)setup;

@end
