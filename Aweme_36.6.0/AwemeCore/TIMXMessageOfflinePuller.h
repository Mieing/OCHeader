@class NSString, TIMXSDKInstance, TIMXGCDTimer;
@protocol TIMXOfflineMsgPullerContextProtocol, TIMXKVStorageProtocol, TIMXMessageOfflinePullerDelegateProtocol;

@interface TIMXMessageOfflinePuller : NSObject <TIMXMessageOfflinePullerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (weak, nonatomic) id<TIMXMessageOfflinePullerDelegateProtocol> delegate;
@property BOOL needsPullOfflineMessage;
@property (retain) TIMXGCDTimer *offlineMessagePullTimer;
@property double pullConvStartTime;
@property double pullCmdStartTime;
@property double pullMsgStartTime;
@property long long pullRequestTimes;
@property long long pullMessageCount;
@property double pullRequestDuration;
@property double pullSDKDuration;
@property double pullSDKHandleDuration;
@property (nonatomic) double lastGeneralOfflinePullTime;
@property (nonatomic) BOOL delayGeneralOfflinePullExists;
@property (nonatomic) BOOL enableOfflinePullOptimize;
@property (nonatomic) double appEnterForegroundOfflinePullInterval;
@property (nonatomic) double macroOfflinePullInterval;
@property (nonatomic) double rejectWSReconnectedPullInterval;
@property (nonatomic) double lastOfflinePullTime;
@property (retain) id<TIMXOfflineMsgPullerContextProtocol> lastContext;
@property (nonatomic) double lastOfflinePullTimeOfEnterForeground;
@property BOOL pullingOfflineMessage;
@property (nonatomic) BOOL isFirstPullAfterWebSocketBroke;
@property (nonatomic) BOOL enableMeasureOfflinePullElapsedTime;
@property (nonatomic) long long offlinePullElapsedTimeExceptionDuration;
@property BOOL isBackground;
@property BOOL backgroundChanged;
@property long long currentNetworkStatus;
@property BOOL reachabilityChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createOfflinePullerWithContext:(id)a0;

- (void)appEnterForeground:(id)a0;
- (void)tokenChanged:(id)a0;
- (void)wsStateChangedToConnected:(id)a0;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2 delegate:(id)a3;
- (void)setNeedsPullOfflineMessageWithContext:(id)a0;
- (void)wsResumeToListen:(id)a0;
- (void)setNeedsPullWithContext:(id)a0 inbox:(int)a1;
- (void)offlineMessagePullFired:(id)a0 pullDirection:(unsigned long long)a1 context:(id)a2;
- (void)offlineMessagePullFired:(id)a0 context:(id)a1;
- (void)offlineMessagePullFired:(id)a0;
- (void)pullOfflineMessageDirection:(unsigned long long)a0 context:(id)a1;
- (long long)getPullSourceFromContext:(id)a0;
- (void)pullOfflineMessageSuccess:(id)a0 pullOfflineContext:(id)a1;
- (void)trackValidOfflineRequest:(id)a0;
- (void)pullOfflineMessageFailure:(id)a0 pullOfflineContext:(id)a1;
- (void)trackWakeUpInitOfflineUC;
- (void)notifyOfflinePull:(id)a0 pullOfflineContext:(id)a1 realHasMore:(BOOL)a2 allHandleResult:(BOOL)a3;
- (void)trackPullResultWithContext:(id)a0 responseObject:(id)a1;
- (void)didCenterFinishPullHasMoreHandle;
- (void).cxx_destruct;
- (void)kickoff;
- (void)reachabilityChanged:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (id)sharedOperationQueue;

@end
