@class AWEIMChatModel, NSString;
@protocol IESIMThirdPartyConversationProtocol, AWEIMConvBoxEntranceDelegate, IESIMThirdPartyConvBoxBizDelegate, IESIMThirdPartyDataManagerProtocol;

@interface IESIMThirdPartyConvBoxManager : NSObject <AWEUserMessage, IESIMThirdPartyBoxMangerDelegate, IESIMThirdPartyConvBoxManagerProtocol>

@property (nonatomic) int bizID;
@property (nonatomic) int inboxType;
@property (retain) AWEIMChatModel *boxEntranceModel;
@property (retain, nonatomic) AWEIMChatModel *snapShotModel;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long importantUnreadCount;
@property (nonatomic) unsigned long long hintUnreadCount;
@property (retain, nonatomic) id<IESIMThirdPartyConversationProtocol> hintConversation;
@property (nonatomic) double maxMessageCreateTime;
@property (retain, nonatomic) id<IESIMThirdPartyDataManagerProtocol> dataManager;
@property (nonatomic) BOOL didFinishFirstSyncData;
@property (nonatomic) unsigned long long recordedUnreadCountWhenEnterBox;
@property (weak, nonatomic) id<AWEIMConvBoxEntranceDelegate> entranceDelegate;
@property (weak, nonatomic) id<IESIMThirdPartyConvBoxBizDelegate> bizDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateCellInfoType:(long long)a0 forChatModel:(id)a1 withValue:(id)a2 completion:(id /* block */)a3;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)syncConversations:(id)a0 completion:(id /* block */)a1;
- (void)batchUpdateConversations:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversationWithLastIndexDict:(id)a0 completion:(id /* block */)a1;
- (void)markReadAllConversationsWithCompletion:(id /* block */)a0;
- (void)syncLocalStickOnTopState:(BOOL)a0;
- (void)trackTotalUnreadCount:(long long)a0 scene:(id)a1 steadyState:(BOOL)a2;
- (unsigned long long)shownUnreadCount;
- (void)reloadBoxEntrance;
- (void)managerLoadSessionsResult:(id)a0 page:(long long)a1 conversationsCount:(unsigned long long)a2;
- (BOOL)shouldIgnoreUnreadCount:(id)a0;
- (BOOL)shouldIgnoreImportantUnreadCount:(id)a0;
- (BOOL)shouldFilterConversation:(id)a0 conversation:(id)a1 filterReason:(id *)a2;
- (void)managerDidUpdate;
- (id)initWithBizID:(int)a0 inboxType:(int)a1;
- (void)removeBoxEntrance;
- (void)loadThirdPartyBoxSessions;
- (void)recordUnreadCountWhenEnterBox;
- (void)updateLastUnreadTime:(double)a0;
- (BOOL)p_getDidFinishFirstSyncData;
- (id)p_createDataManager;
- (void)p_reloadBoxEntrance;
- (void)p_didReloadBoxEntrance;
- (BOOL)p_shouldHideDotWhenEnterBox;
- (void)p_updateLastUnreadTime:(double)a0;
- (double)p_getLatestMessageTimeStampWithBizID:(int)a0;
- (void)p_setLatestMessageTimeStamp:(double)a0 bizID:(int)a1;
- (void)p_setDidFinishFirstSyncData;
- (id)p_updateBizHintConversation;
- (BOOL)p_shouldShowBoxEntranceWhenEmpty;
- (void)p_setLatestUpdateTime:(double)a0;
- (double)p_getLatestUpdateTime;
- (void)p_refreshBoxEntranceModel;
- (id)p_boxEntranceModel;
- (id)p_createBoxEntranceModel;
- (id)p_cellInfoBizIDWithSessionId:(id)a0;
- (BOOL)p_canNotDisplayChat:(id)a0;
- (long long)p_getCalculateConvNum;
- (void)removeBoxEntranceToNil;
- (id)getCellInfoWithBizID:(id)a0;
- (id)box_updateCellInfoWithType:(long long)a0 withValue:(long long)a1 forBusinessID:(id)a2 source:(id)a3 ext:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)p_clearData;

@end
