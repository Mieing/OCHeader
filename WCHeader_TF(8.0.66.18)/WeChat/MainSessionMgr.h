@class NSString, NSMutableArray;

@interface MainSessionMgr : MMUserService <IMMNewSessionMgrExt, MainSessionDelayDeleteTaskDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *topSessions;
@property (retain, nonatomic) NSMutableArray *normalSessions;
@property (retain, nonatomic) NSMutableArray *allTopSessions;
@property (nonatomic) long long totalTopSessionCount;
@property (nonatomic) long long chatBoxMinIndex;
@property (nonatomic) long long visibleUnreadNotifyChatSessionCount;
@property (nonatomic) long long visibleUnreadSlienceChatSessionCount;
@property (nonatomic) BOOL enableAggregation;
@property (retain, nonatomic) NSMutableArray *delayDeleteTasks;
@property (nonatomic) BOOL delayDeleteEnable;
@property (nonatomic) BOOL reserveSessionEnable;
@property (nonatomic) long long minTopCountToFold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowInMainFrame:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateChatBoxEntryMinIndex:(long long)a0;
- (id)visibleSessionEnumerator;
- (id)forwardableSessionEnumerator;
- (long long)visibleTopSessionCount;
- (long long)visibleNormalSessionCount;
- (long long)visibleSessionCount;
- (long long)unreadTopSessionCount;
- (id)topSessionEnumerator;
- (long long)indexOfTopSession:(id)a0;
- (long long)indexOfNormalSession:(id)a0;
- (id)getTopSessionAtIndex:(long long)a0;
- (id)getTopBaseSessionAtIndex:(long long)a0;
- (id)getTopSessionAtIndex:(long long)a0 fulFilled:(BOOL)a1;
- (id)getNormalSessionAtIndex:(long long)a0;
- (id)getNormalBaseSessionAtIndex:(long long)a0;
- (id)getNormalSessionAtIndex:(long long)a0 fulFilled:(BOOL)a1;
- (void)updateMainSessionList;
- (void)updateMainSessionListNotify:(BOOL)a0;
- (BOOL)removeSessionWithUserName:(id)a0;
- (BOOL)hasUnreadVisibleSingleChatSession;
- (BOOL)isAggregationEnable;
- (BOOL)canFoldTopSession;
- (BOOL)isFoldTopSession;
- (void)onNeedReload;
- (void)rebuildMainSessions;
- (BOOL)isReserveSessionEnable;
- (BOOL)isSessionShouldReserve:(id)a0;
- (BOOL)isDelayDeleteEnable;
- (void)delayDeleteSession:(id)a0;
- (void)cancelDelayDelete:(id)a0;
- (void)commitDelayDelete;
- (long long)delayDeleteWaitingCount;
- (void)onServiceTerminate;
- (void)onDelayDeleteTaskFinish:(id)a0;
- (void).cxx_destruct;

@end
