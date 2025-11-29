@class TIMXSDKInstance;

@interface TIMXECOMLoadHistoryMessagesHandlerV2 : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) int inbox;

+ (id)getHandlerWithInbox:(int)a0 rootObject:(id)a1;

- (void)loadMsgesRemedialyFromConversationId:(id)a0 indexV2:(long long)a1 direction:(unsigned long long)a2 msgesCount:(long long)a3 completionBlock:(id /* block */)a4;
- (id)initWithInbox:(int)a0 rootObject:(id)a1;
- (void)traceLoadOlderMsgesPriorityUseDBStatus:(long long)a0 firstLoadValidMsgCount:(long long)a1 firstLoadAllMsgCount:(long long)a2 from:(id)a3;
- (void)filterMessagesMaxContinueWithValidMsges:(id)a0 conversationId:(id)a1 minIndexV2:(long long)a2 maxIndexV2:(long long)a3 completionBlock:(id /* block */)a4;
- (void)remoteLoadMessagesForConversation:(id)a0 anchorMessage:(id)a1 limit:(unsigned long long)a2 allowNetwork:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)_forceRemoteLoadMessagesWithIndex:(long long)a0 inConversation:(id)a1 reason:(id)a2 completionBlock:(id /* block */)a3;
- (void)loadMsgesRemedialyFromConversationId:(id)a0 direction:(unsigned long long)a1 anchorMsgId:(id)a2 msgesCount:(long long)a3 priorityUseDB:(BOOL)a4 forcePullRemote:(BOOL)a5 currentMinIndexV2:(long long)a6 currentMaxIndexV2:(long long)a7 completionBlock:(id /* block */)a8;
- (void)dealForcePullRemoteWithConversationId:(id)a0 direction:(unsigned long long)a1 anchorMsgId:(id)a2 msgesCount:(long long)a3 priorityUseDB:(BOOL)a4 currentMinIndexV2:(long long)a5 currentMaxIndexV2:(long long)a6 completionBlock:(id /* block */)a7;
- (void)dealLocalFetchNoMsgAndRealHasMoreWithConversationId:(id)a0 direction:(unsigned long long)a1 anchorMsgId:(id)a2 msgesCount:(long long)a3 priorityUseDB:(BOOL)a4 currentMinIndexV2:(long long)a5 currentMaxIndexV2:(long long)a6 currentMsgesHaveIndexV2:(BOOL)a7 completionBlock:(id /* block */)a8;
- (void)dealCheckRangeContinuosWithConversationId:(id)a0 direction:(unsigned long long)a1 message:(id)a2 msgesCount:(long long)a3 priorityUseDB:(BOOL)a4 realHasMore:(BOOL)a5 indexV1:(long long)a6 initialIndexV2:(id)a7 completionBlock:(id /* block */)a8;
- (void)loadMessagesFromDBForConversation:(id)a0 direction:(unsigned long long)a1 anchorMessage:(id)a2 limit:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (void)recursivelyFetchMsgesWithDirection:(unsigned long long)a0 indexV1:(long long)a1 initialIndexV2:(id)a2 inConversationId:(id)a3 maxRecursiveCount:(long long)a4 untilMsgesMuArrHasDataOrServerNotHasMoreWithCompletionBlock:(id /* block */)a5;
- (void)directlyFetchMsgesWithDirection:(unsigned long long)a0 anchorIndexV1:(long long)a1 inConversationId:(id)a2 completionBlock:(id /* block */)a3;
- (void)recursivelyFetchMsgesWithDirection:(unsigned long long)a0 indexV1:(long long)a1 initialIndexV2:(id)a2 inConversationId:(id)a3 untilMsgesMuArrHasDataOrServerNotHasMoreWithCompletionBlock:(id /* block */)a4;
- (void)loadMessagesForConversation:(id)a0 direction:(unsigned long long)a1 anchorMessage:(id)a2 visibleLimit:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
