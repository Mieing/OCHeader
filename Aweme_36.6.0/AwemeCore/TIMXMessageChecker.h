@class NSString, NSArray, TIMXSDKInstance, NSObject;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue;

@interface TIMXMessageChecker : NSObject <TIMXMessageStoreChangesObserver> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) NSArray *checkMessages;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQeueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)a0 conversationID:(id)a1;
- (void)onConversationCheckMessageEnd:(id)a0 messageIdentifiers:(id)a1;
- (long long)getCurrentTimeInterval;
- (void)checkInfoMessageIfNeeded;
- (void)trackCheckMessageWithConversation:(id)a0 duration:(long long)a1 preCheckLeakCount:(long long)a2 leakCount:(long long)a3 arrRepairedID:(id)a4;
- (void)checkInfoMessageOldVersionWithConversationNew:(id)a0 coreInfo:(id)a1 startTime:(long long)a2;
- (void)checkInfoMessageOldVersionWithConversation:(id)a0 coreInfo:(id)a1 startTime:(long long)a2;
- (void)onConversationCheckMessageEnd;
- (id)localMessagesWithCheckInfoArray:(id)a0 filterMsgIdSet:(id)a1 convMinIndex:(long long)a2;
- (void)p_async_on_handle_queue:(id /* block */)a0;
- (void)getMessagesCheckInfoOfConversation:(id)a0 cursorReverseBegin:(long long)a1 cursorReverseEnd:(long long)a2 expectMsgTotalCount:(int)a3 completionBlock:(id /* block */)a4;
- (void)getMessagesCheckInfoOfConversation:(id)a0 minIndexV2:(long long)a1 maxIndexV2:(long long)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
