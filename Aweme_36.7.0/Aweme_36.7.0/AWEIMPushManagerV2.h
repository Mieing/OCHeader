@class NSString, AWEIMPushInfoSeparator, NSArray, AWEIMPushMonitor, AWEIMPushAggregator, AWEIMPushProcessor, NSObject, AWEIMPushInfoFilter;
@protocol OS_dispatch_queue;

@interface AWEIMPushManagerV2 : NSObject <AWEIMPushConditionLimitSceneMessage, AWELiveRoomMessage, IESIMLoginManagerMessage, IESIMChatDataManagerDelegate, AWEInnerNotificationMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMPushInfoFilter *filter;
@property (retain, nonatomic) AWEIMPushInfoSeparator *separator;
@property (retain, nonatomic) AWEIMPushAggregator *aggregator;
@property (retain, nonatomic) NSArray *buffer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic) BOOL pullRequestProcessing;
@property (retain, nonatomic) AWEIMPushMonitor *monitor;
@property (retain, nonatomic) AWEIMPushProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)iesim_didInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(long long)a2 context:(id)a3;
- (void)didStartPullOfflineMessagesForUser:(long long)a0 inbox:(int)a1;
- (void)iesim_chatDataManager:(id)a0 pullDirection:(unsigned long long)a1 didEndPullOfflineMessagesWithHasMore:(BOOL)a2 userInfo:(id)a3;
- (void)anchorEndLive;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)p_setup;
- (void)innerNotificationDidDisplay:(id)a0;
- (void)innerNotificationDidFinishDisplay:(id)a0;
- (void)iesim_messageUpdated:(id)a0 inConversation:(id)a1 reason:(long long)a2;
- (BOOL)isAnyPushShowing;
- (void)p_retryPushBufferInfoWithEventType:(long long)a0;
- (void)didHitLimitSceneWithType:(long long)a0 viewController:(id)a1;
- (void)onSplashDisappearNotification:(id)a0;
- (void)onVideoRecordNavigationControllerDidDisappearNotification:(id)a0;
- (void)onKAntiAddictDidEndDisplayMaskNotification:(id)a0;
- (void)p_addObserverForBusinessEvents;
- (void)p_unObserverForBusinessEvents;
- (void)p_updateOfflinePullRequestProcessStatus:(BOOL)a0;
- (void)dealOfflineMessagesPullStartForUser:(long long)a0 inbox:(int)a1;
- (void)dealOfflineMessagesPullEndWithHasMore:(BOOL)a0 pullDirection:(unsigned long long)a1 userInfo:(id)a2;
- (void)p_updateActiveUserMessageIfNeededWithInfo:(id)a0 context:(id)a1;
- (id)p_fetchConvIfNeededWithConversationID:(id)a0;
- (id)p_fetchUserInfoIfNeededWithPeerID:(id)a0;
- (id)prefetchDataWithInfo:(id)a0 context:(id)a1;
- (BOOL)shouldTriggerWhenMessageUpdated:(id)a0 cid:(id)a1 reason:(long long)a2;
- (void)updateFrequencyControlIfNeededWithPushShow:(id)a0;
- (long long)sourceTypeWithMessageUpdateReason:(long long)a0;
- (long long)triggerReasonWithMessageUpdateReason:(long long)a0;
- (id)chatTypeForPushViewModel:(id)a0;
- (void)p_addObserverForDataSourceUpdated;
- (void)p_addObserverForBasicEvents;
- (void)onDidReceiveNewPropertyItemNotification:(id)a0;
- (void)onPushRetryNotification:(id)a0;
- (void)onAppDidBecomeActiveNotification:(id)a0;
- (void)onAppWillResignActiveNotification:(id)a0;
- (id)p_contextWithType:(long long)a0 reason:(long long)a1 stage:(long long)a2;
- (void)p_triggerPushWithInfo:(id)a0 context:(id)a1;
- (void)p_tryRemoveBufferWithType:(long long)a0;
- (id)p_checkWithInfo:(id)a0 context:(id)a1;
- (void)p_dealWithCheckResult:(id)a0 context:(id)a1;
- (void)p_requestPush:(id)a0 withContext:(id)a1;
- (void)p_tryAddBuffer:(id)a0;
- (id)p_lastFilterBeforeShow:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
