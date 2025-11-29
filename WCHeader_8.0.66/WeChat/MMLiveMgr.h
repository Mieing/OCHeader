@class NSRecursiveLock, NSMutableDictionary, NSString, OrderedDictionary;

@interface MMLiveMgr : MMUserService <IMsgExt, IContactMgrExt, IExptServiceExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *openedLiveItemDict;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) OrderedDictionary *fetchLiveInfoQueue;
@property (retain, nonatomic) NSMutableDictionary *fetchingDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned long long)unreadLiveCount:(id)a0;
- (id)unreadLiveList:(id)a0;
- (id)openedLiveList:(id)a0;
- (void)closeLiveTipBar:(unsigned long long)a0 roomId:(id)a1;
- (void)closeLiveTipBarWithRoomId:(id)a0;
- (void)loadLiveInfoIfExists:(id)a0;
- (void)loadOpenedLivesAsync;
- (void)batchFetchLiveInfo:(id)a0 roomId:(id)a1;
- (BOOL)checkFetchLiveInfoQueue;
- (void)updateLiveStatusEndWithLiveId:(unsigned long long)a0;
- (void)onGetLiveInfoWithResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 andLiveInfo:(id)a3;
- (void)addOpenedLive:(id)a0;
- (void)addOpenedLiveList:(id)a0 roomId:(id)a1;
- (void)removeOpenedLive:(id)a0;
- (void)removeOpenedLive:(unsigned long long)a0 roomId:(id)a1;
- (void)updateOpenedLiveIfNecessary:(id)a0;
- (void)notifyLiveCountChanged:(id)a0;
- (BOOL)isGroupLiveMessage:(id)a0;
- (id)currentLiveChatRoomId;
- (id)getDisplayNameByUserName:(id)a0 andRoomUserName:(id)a1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onGetNewXmlCloseLiveMsg:(id)a0;
- (void)onGetNewXmlFinderChatRoomLiveCloseMsg:(id)a0;
- (void)onGetNewXmlFinderChatRoomLiveTipsbar:(id)a0;
- (void).cxx_destruct;

@end
