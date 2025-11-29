@class NSString, TIMXSDKInstance, NSOperationQueue, TIMXDispatchQueuePool;

@interface TIMXECOMGetUserMessageHandlerV2 : NSObject <TIMXECOMGetUserMessageHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) TIMXDispatchQueuePool *dispatchQueuePool;
@property (retain, nonatomic) NSOperationQueue *handlerOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsPullWithReason:(long long)a0;
- (void)setNeedsPullWithReason:(long long)a0 tryCount:(long long)a1;
- (BOOL)canPullMessage;
- (long long)readInfoVersionFromStore;
- (long long)conversationVersionFromStore;
- (long long)cmdMessageIndexFromStore;
- (void)setConversationVersionToStore:(long long)a0;
- (void)setCmdMessageIndexToStore:(long long)a0;
- (void)setReadInfoVersionToStore:(long long)a0;
- (BOOL)hasInitSuccess;
- (id)initWithInbox:(int)a0 userID:(long long)a1 rootObject:(id)a2;
- (void).cxx_destruct;

@end
