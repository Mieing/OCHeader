@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXSendMessageCacheManager : NSObject <TIMXInstanceScopeSingleton, TIMXSendMessageCacheManagerProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *insertMessageCompletionDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearMessageWithConversationId:(id)a0 messageID:(id)a1;
- (id)queryTimoMessageWithConversationId:(id)a0 messageID:(id)a1;
- (void)cacheMessageWithMessage:(id)a0;
- (id)queryOriginalMessageBeingSentWithConversationId:(id)a0 messageID:(id)a1;
- (id)queryOriginalMessageBeingSentWithConversationIdCore:(id)a0 messageID:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
