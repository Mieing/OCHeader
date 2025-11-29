@class NSString, YYMemoryCache;
@protocol IESIMConversationReadReceiptProtocol;

@interface AWEIMMessageStateDispatcher : NSObject <AWEUserMessage>

@property (retain, nonatomic) YYMemoryCache *mid2MessageCache;
@property (retain, nonatomic) YYMemoryCache *messageReadReceiptCache;
@property (retain, nonatomic) id<IESIMConversationReadReceiptProtocol> conversationReadReceipt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateReadReceiptForMessages:(id)a0 requestFrom:(id)a1 completion:(id /* block */)a2;
+ (void)updateReadReceiptForMessage:(id)a0 finishedParticipantIDs:(id)a1 expectedParticipantIDs:(id)a2;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)__createCacheObject;
- (void)__handleReadReceiptMap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
