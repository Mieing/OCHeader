@class NSTimer, NSString, NSArray, AWEIMGroupParticipantBizInfoDataManager, NSSet, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray, AWEIMMessageConversation;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEIMGroupParticipantBizInfoConversationViewModel : NSObject <AWEIMGMPeerViewModelConfigSource, AWEIMMessageConversationDelegate>

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSArray *activeTagConfs;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *activeTagConfsLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } activeTagConfsMutex;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphoreLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (copy, nonatomic) NSArray *inactiveThresholdConfs;
@property (copy, nonatomic) NSDictionary *fansClubIconConf;
@property (retain, nonatomic) AWEIMGroupParticipantBizInfoDataManager *dbManager;
@property (retain, nonatomic) NSMutableDictionary *peerViewModelDictM;
@property (copy) NSSet *participantsSet;
@property (nonatomic) BOOL isCurrentUserAParticipant;
@property (copy, nonatomic) NSString *currentLoginUserSecUid;
@property BOOL isNotFetchingMoreData;
@property (retain, nonatomic) NSString *lastGroupOwnerID;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *waitRequestSecUids;
@property (nonatomic) BOOL hitActiveTagV2;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSDictionary *liveFansClubIconConfig;
@property (retain, nonatomic) NSDictionary *purchasedFansClubIconConfig;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__getMessageActiveInfoWithConversation:(id)a0 supportThisFeature:(BOOL *)a1 needCleanOldCache:(BOOL *)a2;

- (void)participantsDidUpdate;
- (id)peerViewModelWithSecUid:(id)a0;
- (id)allPeerViewModelsWithCacheInMemory:(BOOL)a0;
- (void)updateLiveFansSubscriptionDate;
- (id)allPeerViewModels;
- (void)p_fetchLastConversationOwnerID;
- (void)p_updateLastConversationOwnerID;
- (void)__tryUpdateAllParticipantsBizInfo;
- (void)p_observerConversationUpdate;
- (void)__updateGroupParticipantSecUids:(id)a0 cid:(id)a1;
- (BOOL)__shouldFetchFansClubData;
- (BOOL)__shouldFetchliveFansSubscriptionDateData;
- (BOOL)shouldFetchFansTagsDataSource;
- (void)__updateDiffParticipantsMessageActive;
- (void)__deleteAllObjects;
- (void)__prepareParticipantsSet;
- (BOOL)p_isNeedUpdateForAppVersionChanged;
- (void)__updateAllGroupParticipantInfoWithCid:(id)a0 cursor:(long long)a1 repeatCount:(long long)a2;
- (void)__tryUpdateAllParticipantsFansClubInfoWithCid:(id)a0;
- (void)__tryUpdateAllParticipantsLiveFansSubscriptionDateWithCid:(id)a0;
- (void)__tryUpdateFansTagsOfAllParticipantsWithCid:(id)a0;
- (void)__saveActiveList:(id)a0 fansClubList:(id)a1 needCleanOld:(BOOL)a2;
- (void)__updateFansTagsForAllParticipantWithCid:(id)a0 cursor:(long long)a1 repeatCount:(long long)a2;
- (void)__saveResult:(id)a0 option:(unsigned long long)a1 needCleanOld:(BOOL)a2;
- (void)__updateLiveFansSubscriptionDateWithCid:(id)a0 cursor:(long long)a1 repeatCount:(long long)a2;
- (BOOL)__shouldFetchliveFansSubscriptionDateDataFromNetwork;
- (void)p_refreshStoreAppVersion;
- (void)__updateActiveTagConfs:(id)a0;
- (void)__updateInactiveThresholdConfs:(id)a0;
- (void)__updateFansClubIconConfs:(id)a0;
- (void)__updateLiveFansClubIconConfig:(id)a0;
- (void)__updatePurchasedFansClubIconConfig:(id)a0;
- (void)__recordFansClubLevelForCurrentLoginUserForTrackingPurposeWithLevel:(long long)a0;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConversation:(id)a0;

@end
