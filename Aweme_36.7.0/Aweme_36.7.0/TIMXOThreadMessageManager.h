@class NSString, TIMXSDKInstance;

@interface TIMXOThreadMessageManager : NSObject <TIMXInstanceScopeSingleton, TIMXThreadMessageManagerProtocol> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bumpThreadDirectionForConvID:(id)a0 threadDirection:(int)a1;
- (int)threadDirectionForConvID:(id)a0;
- (BOOL)isThreadVisibleWithConvID:(id)a0;
- (BOOL)bumpThreadVisiblePropertyWithConvID:(id)a0 isVisible:(BOOL)a1;
- (long long)queryRealMessageCountInThread:(id)a0 filterBlock:(id /* block */)a1;
- (void)queryOldestMessagesWithThreadConversationID:(id)a0 filterBlock:(id /* block */)a1 minimumMessageCount:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)queryNewestMessagesWithThreadConversationID:(id)a0 filterBlock:(id /* block */)a1 minimumMessageCount:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
