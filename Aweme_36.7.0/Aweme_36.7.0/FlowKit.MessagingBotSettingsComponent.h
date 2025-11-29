@interface FlowKit.MessagingBotSettingsComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _conversationInfoComponent;
    void /* unknown type, empty encoding */ _temporaryChatComponent;
    void /* unknown type, empty encoding */ _useLocalSubConversation;
    void /* unknown type, empty encoding */ _botAdapter;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ flowMenuView;
    void /* unknown type, empty encoding */ inMessageClearing;
    void /* unknown type, empty encoding */ afterClearMessages;
    void /* unknown type, empty encoding */ renameAlert;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBotSettingsButton;
}

- (void)conversationLastMessageChanged:(id)a0;
- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)renameAlertTextFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
