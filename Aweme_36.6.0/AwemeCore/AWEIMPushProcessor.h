@class AWEIMPushInfoFilter, NSArray, AWEIMPushInfoSeparator, NSString, AWEIMPushMonitor, AWEIMPushAggregator, NSObject;
@protocol AWEIMPushConditionRegistryProtocol, OS_dispatch_queue;

@interface AWEIMPushProcessor : NSObject <AWELiveRoomMessage, AWEInnerNotificationMessage>

@property (retain, nonatomic) AWEIMPushInfoFilter *filter;
@property (retain, nonatomic) AWEIMPushAggregator *aggregator;
@property (retain, nonatomic) AWEIMPushInfoSeparator *separator;
@property (retain, nonatomic) NSArray *buffer;
@property (weak, nonatomic) id<AWEIMPushConditionRegistryProtocol> registry;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) AWEIMPushMonitor *monitor;
@property (nonatomic) BOOL pullRequestProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)anchorEndLive;
- (void)p_setup;
- (void)innerNotificationDidDisplay:(id)a0;
- (void)innerNotificationDidFinishDisplay:(id)a0;
- (void)retryPushBufferInfoWithEventType:(long long)a0;
- (void)onSplashDisappearNotification:(id)a0;
- (void)onVideoRecordNavigationControllerDidDisappearNotification:(id)a0;
- (void)onKAntiAddictDidEndDisplayMaskNotification:(id)a0;
- (void)p_updateActiveUserMessageIfNeededWithInfo:(id)a0 context:(id)a1;
- (id)p_fetchConvIfNeededWithConversationID:(id)a0;
- (id)p_fetchUserInfoIfNeededWithPeerID:(id)a0;
- (id)prefetchDataWithInfo:(id)a0 context:(id)a1;
- (void)updateFrequencyControlIfNeededWithPushShow:(id)a0;
- (id)chatTypeForPushViewModel:(id)a0;
- (id)initWithPushCondition:(id)a0 scene:(id)a1 monitor:(id)a2;
- (void)onPushRetryNotification:(id)a0;
- (void)onAppDidBecomeActiveNotification:(id)a0;
- (void)onAppWillResignActiveNotification:(id)a0;
- (id)p_contextWithType:(long long)a0 reason:(long long)a1 stage:(long long)a2;
- (void)p_tryRemoveBufferWithType:(long long)a0;
- (void)triggerPushWithInfo:(id)a0 context:(id)a1;
- (id)p_checkWithInfo:(id)a0 context:(id)a1;
- (void)p_dealWithCheckResult:(id)a0 context:(id)a1;
- (void)p_requestPush:(id)a0 withContext:(id)a1;
- (void)p_tryAddBuffer:(id)a0;
- (id)p_lastFilterBeforeShow:(id)a0;
- (void)p_addObserve;
- (void).cxx_destruct;
- (void)dealloc;

@end
