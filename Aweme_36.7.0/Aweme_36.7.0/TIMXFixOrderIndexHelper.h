@class NSString, TIMXSDKInstance;

@interface TIMXFixOrderIndexHelper : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onInsertNewMessages:(id)a0 reason:(id)a1;
- (long long)maxOrderIndexForConversationCommon:(id)a0;
- (void)checkNewSendMsgNeedFixWithOrderIndex:(long long)a0 msgID:(id)a1 inConversation:(id)a2;
- (void)clearOrderIndexInConversation:(id)a0;
- (void)addOrderIndexToLocalExt:(long long)a0 msgID:(id)a1 inConversation:(id)a2;
- (void)handleOnHistorySceneFix:(id)a0;
- (BOOL)isInvalidOrderIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
