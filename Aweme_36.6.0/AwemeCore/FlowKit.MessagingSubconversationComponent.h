@interface FlowKit.MessagingSubconversationComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _navigationBarComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _dataController;
    void /* unknown type, empty encoding */ _conversation;
    void /* unknown type, empty encoding */ forceHideSubConvBg;
    void /* unknown type, empty encoding */ cmdSubConvNameTimeStamp;
    void /* unknown type, empty encoding */ holdingSubConvName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subConversationBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_createConversationButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldShowCreateConversation;
}

- (void)conversationLastMessageChanged:(id)a0;
- (void)conversationDidForceDelete:(id)a0;
- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)conversationInfosChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
