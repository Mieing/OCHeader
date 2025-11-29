@class TIMXConversationInfosDispatcher, NSString, TIMXSDKInstance;

@interface TIMXConversationInfosFetcher : NSObject <TIMXConversationInfosDispatcherDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXConversationInfosDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConversationWithContext:(id)a0;
- (void)updateConversationWithContexts:(id)a0;
- (void)dispatcher:(id)a0 shouldTriggerInfoFetchTask:(id)a1 updateType:(unsigned long long)a2;
- (void)p_trackAggregationReportStep:(unsigned long long)a0 error:(id)a1;
- (void)handleConversationInfos:(id)a0 failedConversations:(id)a1 task:(id)a2 DBCompletion:(id /* block */)a3;
- (void)fetchConversationWithTask:(id)a0 requestCompletion:(id /* block */)a1 DBCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
