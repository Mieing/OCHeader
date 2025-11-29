@class NSSet, NSString, NSMutableSet, AWEIMIncentiveFetchAvailableGroupChatFromDBManager;

@interface AWEIMIncentiveAvailableGroupChatDataManager : NSObject <IESIMChatDataManagerDelegate, IESIMCoreServiceFactoryMessage>

@property (retain, nonatomic) NSMutableSet *incentiveTotalAvailableGroupChat;
@property (retain, nonatomic) NSMutableSet *signOnGroupChatBeforeLoadDataFromStorage;
@property (retain, nonatomic) NSSet *remoteConvList;
@property (retain, nonatomic) AWEIMIncentiveFetchAvailableGroupChatFromDBManager *fetchLocalAvailableDataFromDBManager;
@property (nonatomic) BOOL hasInitAvailableGroupLocalData;
@property (nonatomic) BOOL hasInitAvailableGroupRemoteData;
@property (nonatomic) BOOL hasStartFetchRemoteData;
@property (nonatomic) BOOL hasStartFetchLocalDBData;
@property (nonatomic) BOOL hasLoadStorageData;
@property (retain, nonatomic) NSString *loginUid;
@property (nonatomic) BOOL addListnerNotSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_cacheKeyWithBizType:(id)a0 loginUid:(id)a1;
+ (BOOL)isValidConversationWithCon:(id)a0;

- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)iesim_chatDataManager:(id)a0 totalUnreadCountUpdate:(long long)a1;
- (void)iesim_chatDataManager:(id)a0 chatsDidUpdate:(id)a1;
- (void)iesim_didFinishCoreServiceFactoryCreate;
- (void)p_setup;
- (void)p_addListener;
- (void)getAvailableGroupChatFromLocalCache;
- (void)p_getRemoteData:(id)a0;
- (void)p_getLocalData;
- (BOOL)p_shouldScanDB;
- (void)mergeAvailableChatDataWithSourceType:(unsigned long long)a0 data:(id)a1;
- (BOOL)p_enableScanDBToGetAvailableGroupChat;
- (long long)p_scanDBTimeInterval;
- (void)checkGroupIsAvailableWithConvArray:(id)a0 afterFilterArray:(id)a1 lastOrder:(long long)a2 completion:(id /* block */)a3;
- (void)updateLocalAvailableGroupChatCache;
- (void)p_sendAvailableGroupChatNotifyWithIsAdd:(BOOL)a0;
- (void)handleAvailableLocalAndRemoteGroupChatFinish;
- (void)checkGroupIsUnAvailableWithConvArray:(id)a0 unAvailableArray:(id)a1 lastOrder:(long long)a2 completion:(id /* block */)a3;
- (void)updateAvailableGroupChatToServerIfNeedWithUpdateType:(unsigned long long)a0;
- (void)p_handleConversationDidUpdateWithCon:(id)a0;
- (BOOL)p_enableUpdateToServerWithUpdateType:(unsigned long long)a0;
- (id)getAvailableGroupConvArray;
- (void)startAppendRemoteData:(id)a0;
- (void)startAppendLocalDBData;
- (id)p_getIncentiveChatData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
