@interface AWEIMGrowthImpl.IncentiveChatCommandMessageObserver : NSObject <IESIMChatDataManagerDelegate, IESIMP2PMessageStreamListener, IESIMIncentiveChatCommandMsgNotifierDelegate, IESIMCoreServiceFactoryMessage> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cmdHandler;
}

- (void)iesim_newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)iesim_didReceiveIncentiveChatCommandMessage:(id)a0;
- (void)iesim_didFinishCoreServiceFactoryCreate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
