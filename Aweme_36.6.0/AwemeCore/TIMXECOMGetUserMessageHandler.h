@class NSString, TIMXSDKInstance;
@protocol TIMXPullerStatusChangeObserverDelegate, TIMXKVStorageProtocol;

@interface TIMXECOMGetUserMessageHandler : NSObject <TIMXECOMGetUserMessageHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property BOOL needsPullMessage;
@property double pullConvStartTime;
@property double pullCmdStartTime;
@property double pullReadInfoStartTime;
@property double pullMsgStartTime;
@property long long pullRequestTimes;
@property long long pullCmdMessageCount;
@property long long pullReadInfoMessageCount;
@property long long pullConvMessageCount;
@property long long pullMessageCount;
@property long long pullConvCount;
@property double pullRequestDuration;
@property double pullSDKDuration;
@property double saveAllMessageTotalTimeCost;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsPullWithReason:(long long)a0;
- (void)setNeedsPullWithReason:(long long)a0 tryCount:(long long)a1;
- (BOOL)canPullMessage;
- (void)setNeedsPullOfflineMessageWithReason:(long long)a0 tryCount:(long long)a1;
- (void)pullOfflineMessageWithTryCount:(long long)a0 reason:(long long)a1;
- (BOOL)getPullingState;
- (BOOL)getHasPendingPulling;
- (long long)getPendingPullingReason;
- (void)setHasPendingPulling:(BOOL)a0;
- (void)setPendingPullingReason:(long long)a0;
- (void)setPullingState:(BOOL)a0;
- (long long)readInfoVersionFromStore;
- (long long)conversationVersionFromStore;
- (long long)cmdMessageIndexFromStore;
- (void)getMessageWithConversationVersion:(id)a0 cmdMessageIndex:(id)a1 readInfoVersion:(id)a2 tryCount:(long long)a3 reason:(long long)a4;
- (BOOL)isInWrongAccount:(id)a0;
- (long long)getUserIDFromResponse:(id)a0;
- (void)pullOfflineMessageSuccess:(id)a0 startingTime:(double)a1 jobId:(unsigned int)a2 pullingDirection:(unsigned long long)a3 tryCount:(long long)a4 reason:(long long)a5;
- (void)pullOfflineMessageFailure:(id)a0 jobId:(unsigned int)a1 tryCount:(long long)a2;
- (long long)dealReadInfo:(id)a0 context:(id)a1;
- (long long)dealConvMessage:(id)a0 context:(id)a1;
- (long long)dealCmdMessage:(id)a0;
- (id)finishCurrentPullWithHasMore:(BOOL)a0 response:(id)a1;
- (void)getConfigsWithNeedCheckConversationIntegrity:(BOOL)a0;
- (long long)currentPageSizeFromCache;
- (id)getKeyWithInbox:(id)a0;
- (void)setConversationVersionToStore:(long long)a0;
- (void)setCmdMessageIndexToStore:(long long)a0;
- (void)setReadInfoVersionToStore:(long long)a0;
- (BOOL)hasInitSuccess;
- (id)initWithInbox:(int)a0 userID:(long long)a1 rootObject:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
