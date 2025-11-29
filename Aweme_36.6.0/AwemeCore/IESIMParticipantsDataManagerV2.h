@class NSString, NSDictionary, TIMXMulticastDelegate, YYMemoryCache;
@protocol IESIMConversationProtocol, IESIMSDKParticipantsInConversationDataSource;

@interface IESIMParticipantsDataManagerV2 : NSObject <TIMXOParticipantsInConversationDataSourceDelegate, IESIMTIMXLifeMessage, IESIMParticipantsDataManagerV2Protocol>

@property (copy, nonatomic) NSString *conversationId;
@property (retain) id<IESIMConversationProtocol> conversation;
@property (retain) id<IESIMSDKParticipantsInConversationDataSource> dataSource;
@property (retain, nonatomic) TIMXMulticastDelegate *eventDispatcher;
@property (retain) NSDictionary *hotData;
@property (retain) NSDictionary *aliasData;
@property (retain, nonatomic) YYMemoryCache *temporaryCache;
@property (nonatomic) BOOL isDirtyData;
@property (nonatomic) BOOL needTrack;
@property (nonatomic) long long numOfHotDataHit;
@property (nonatomic) long long numOfTemporaryCacheHit;
@property (nonatomic) long long numOfAllParticipantsLoad;
@property (nonatomic) long long totalNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)asyncGetParticipantWithConversationId:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
+ (id)instanceWithConversationId:(id)a0;
+ (id)sharedHashMapLock;
+ (void)cleanSharedCache;
+ (id)sharedCache;
+ (id)config;
+ (id)sharedMapTable;

- (id)participantForUserId:(id)a0;
- (id)initWithConversationId:(id)a0;
- (id)admins;
- (id)participantAliasForUserId:(id)a0;
- (void)asyncGetParticipantForUserID:(id)a0 completion:(id /* block */)a1;
- (void)asyncGetAdminsWithCompletion:(id /* block */)a0;
- (void)asyncGetParticipantsWithCompletion:(id /* block */)a0;
- (void)checkParticipantIntegrity;
- (id)addWeakObserver:(id)a0;
- (void)removeObserverWithIdentifier:(id)a0;
- (void)__createDataSource;
- (long long)__currentUserID;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (BOOL)p_isGroupMemberV2Enable;
- (void)participantsDataSourceDidUpdate:(id)a0 newParticipants:(id)a1;
- (void)__loadMinimalData;
- (void)__refreshCacheIfNeeded;
- (id)__participants;
- (BOOL)p_isGroupMemberCacheFix;
- (id)participants;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
