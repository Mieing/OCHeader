@class BDECPigeonBoundedThrottle, NSString, BDECPigeonClientV2, BDECPigeonConversationDataSource, BDECPigeonChannel, NSMutableArray, NSArray;

@interface BDECPigeonBizConversationDataSource : BDECPigeonConversationDataSource <BDECPigeonBizConversationDataSourceInterface, BDECPigeonConversationDataSourceDelegate>

@property (retain, nonatomic) BDECPigeonConversationDataSource *dataSource;
@property (readonly, weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) BDECPigeonBoundedThrottle *updateBoundedThrottle;
@property (retain, nonatomic) NSMutableArray *dataUpdateTimeTrackers;
@property (nonatomic) BOOL enableUnreadCount;
@property (copy, nonatomic) NSString *scene;
@property (readonly, weak, nonatomic) BDECPigeonChannel *channel;
@property (copy, nonatomic) NSArray *filterMethods;
@property (copy, nonatomic) NSArray *sortFunctions;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForMutedConversations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)conversationDataSource:(id)a0 didUpdateWithUpdate:(id)a1 updateReason:(long long)a2;
- (void)updateUnreadCount;
- (void)innerConversationUpdate:(long long)a0;
- (long long)loadDataTime;
- (void)reportFetchTrack:(BOOL)a0;
- (void)trackRunningTime:(long long)a0 boundedAsyncTime:(long long)a1 reason:(long long)a2;
- (void)trackEndTime:(long long)a0 reason:(long long)a1 update:(id)a2;
- (void)trackNotifyTime:(long long)a0 update:(id)a1 reason:(long long)a2 called:(BOOL)a3;
- (void)conversationDataSource:(id)a0 messageReadDidUpdateWithConversationIds:(id)a1;
- (void)conversationDataSource:(id)a0 onMessageUpdated:(id)a1 conversation:(id)a2;
- (void)conversationDataSource:(id)a0 onMessageDeleted:(id)a1;
- (void)reportUpdateTrack:(long long)a0 update:(id)a1;
- (void)trackAllIMCloudNotify:(id)a0 update:(id)a1;
- (void)setUpdateThrottleTag:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)loadData;

@end
