@class TIMXGCDTimer;

@interface TIMXOfflineConversationPullerDefault : TIMXSingleStrategyPullerDefault

@property BOOL needsPullOfflineCmdMessage;
@property BOOL pullingOfflineCmdMessage;
@property (retain) TIMXGCDTimer *offlineCmdMessagePullTimer;
@property BOOL needsPullOfflineConversation;
@property BOOL pullingOfflineConversation;
@property (retain) TIMXGCDTimer *offlineConversationPullTimer;
@property double pullConvStartTime;
@property double pullCmdStartTime;

- (void)appEnterForeground:(id)a0;
- (void)setNeedsPullWithReason:(long long)a0;
- (void)tokenChanged:(id)a0;
- (void)wsStateChangedToConnected:(id)a0;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (void)setNeedsPullOfflineCmdMessageWithReason:(long long)a0;
- (void)setNeedsPullOfflineConversationWithReason:(long long)a0;
- (void)offlineConversationPullFired:(id)a0;
- (void)pullOfflineConversation;
- (void)offlineCmdMessagePullFired:(id)a0;
- (void)pullOfflineCmdMessage;
- (void)updatePullerCursorWithResponse:(id)a0;
- (void).cxx_destruct;
- (void)kickoff;
- (void)dealloc;
- (id)sharedOperationQueue;

@end
