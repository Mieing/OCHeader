@class BDECPigeonBoundedThrottle, NSArray, BDECPigeonClientV2, NSMutableSet, BDECPigeonChannel, NSMutableArray, NSString;
@protocol BDECIMCloudConversationsDataSourceV2Interface;

@interface BDECPigeonChannelConversationDataSource : BDECPigeonConversationDataSource <BDECIMCloudConversationsDataSourceV2Delegate, BDECPigeonChannelDelegate, BDECPigeonChannelConversationDataSourceInterface>

@property (weak, nonatomic) BDECPigeonChannel *channel;
@property (retain, nonatomic) id<BDECIMCloudConversationsDataSourceV2Interface> dataSource;
@property (copy, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSMutableSet *prepareUpdateConversationIds;
@property (retain, nonatomic) BDECPigeonBoundedThrottle *updateBoundedThrottle;
@property (retain, nonatomic) BDECPigeonBoundedThrottle *addBoundedThrottle;
@property (nonatomic) long long loadDataTime;
@property (retain, nonatomic) NSMutableArray *dataUpdateTimeTrackers;
@property (retain, nonatomic) NSMutableArray *dataAddTimeTrackers;
@property (readonly, weak, nonatomic) BDECPigeonClientV2 *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *filterMethods;
@property (copy, nonatomic) NSArray *sortFunctions;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForMutedConversations;

- (void)notifyUpdate:(long long)a0;
- (void)channel:(id)a0 onMessageUpdated:(id)a1 conversation:(id)a2;
- (void)channel:(id)a0 onMessageReadUpdatedWithConversationIdList:(id)a1;
- (void)conversationDataSource:(id)a0 didUpdateWithUpdate:(id)a1 updateReason:(long long)a2;
- (void)conversationDataSource:(id)a0 didLoadAllConversations:(id)a1;
- (void)conversationDataSource:(id)a0 conversationUpdate:(id)a1;
- (void)onConversationDataSourceMessagesDeleted:(id)a0 belongingConversationMap:(id)a1;
- (void)deleteConversationsBeforeTime:(id)a0 minRemain:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchMessageReadsWithCompletion:(id /* block */)a0;
- (void)trackRunningTime:(long long)a0 boundedAsyncTime:(long long)a1 reason:(long long)a2;
- (void)trackEndTime:(long long)a0 reason:(long long)a1 update:(id)a2;
- (void)innerConversationConversationUpdate;
- (void)addConversationUpdate;
- (void)trackerIMCloudNotify:(id)a0 before:(unsigned long long)a1 afterCount:(unsigned long long)a2 updateCount:(unsigned long long)a3 tracker:(id)a4;
- (void)trackNotifyTime:(long long)a0 reason:(long long)a1 called:(BOOL)a2 imcloudTracker:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadData;
- (id)initWithChannel:(id)a0;
- (void)refreshData;

@end
