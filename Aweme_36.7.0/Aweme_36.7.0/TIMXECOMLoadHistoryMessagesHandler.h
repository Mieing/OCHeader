@class TIMXSDKInstance;

@interface TIMXECOMLoadHistoryMessagesHandler : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) int inbox;

- (void)loadOlderMsgesRemedialyFromConversationId:(id)a0 anchorMsgId:(id)a1 msgesCount:(long long)a2 priorityUseDB:(BOOL)a3 forcePullRemote:(BOOL)a4 currentMinIndexV2:(long long)a5 currentMaxIndexV2:(long long)a6 completionBlock:(id /* block */)a7;
- (id)initWithInbox:(int)a0 rootObject:(id)a1;
- (void)dealForcePullRemoteWithConversationId:(id)a0 anchorMsgId:(id)a1 msgesCount:(long long)a2 priorityUseDB:(BOOL)a3 currentMinIndexV2:(long long)a4 currentMaxIndexV2:(long long)a5 completionBlock:(id /* block */)a6;
- (void)traceLoadOlderMsgesPriorityUseDBStatus:(long long)a0 firstLoadValidMsgCount:(long long)a1 firstLoadAllMsgCount:(long long)a2 from:(id)a3;
- (void)dealLocalFetchNoMsgAndRealHasMoreWithConversationId:(id)a0 anchorMsgId:(id)a1 msgesCount:(long long)a2 priorityUseDB:(BOOL)a3 currentMinIndexV2:(long long)a4 currentMsgesHaveIndexV2:(BOOL)a5 completionBlock:(id /* block */)a6;
- (void)dealCheckRangeContinuosWithConversationId:(id)a0 message:(id)a1 msgesCount:(long long)a2 priorityUseDB:(BOOL)a3 realHasMore:(BOOL)a4 indexV1:(long long)a5 initialIndexV2:(id)a6 completionBlock:(id /* block */)a7;
- (void)filterMessagesMaxContinueWithValidMsges:(id)a0 conversationId:(id)a1 minIndexV2:(long long)a2 maxIndexV2:(long long)a3 completionBlock:(id /* block */)a4;
- (void)loadMessagesFromDBForConversation:(id)a0 anchorMessage:(id)a1 limit:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)recursivelyFetchMsgesWithIndexV1:(long long)a0 initialIndexV2:(id)a1 inConversationId:(id)a2 maxRecursiveCount:(long long)a3 untilMsgesMuArrHasDataOrServerNotHasMoreWithCompletionBlock:(id /* block */)a4;
- (void)directlyFetchMsgesWithAnchorIndexV1:(long long)a0 inConversationId:(id)a1 completionBlock:(id /* block */)a2;
- (void)remoteLoadMessagesForConversation:(id)a0 anchorMessage:(id)a1 limit:(unsigned long long)a2 allowNetwork:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)_forceRemoteLoadMessagesWithIndex:(long long)a0 inConversation:(id)a1 reason:(id)a2 completionBlock:(id /* block */)a3;
- (void)recursivelyFetchMsgesWithIndexV1:(long long)a0 initialIndexV2:(id)a1 inConversationId:(id)a2 untilMsgesMuArrHasDataOrServerNotHasMoreWithCompletionBlock:(id /* block */)a3;
- (void)loadMessagesForConversation:(id)a0 anchorMessage:(id)a1 visibleLimit:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
