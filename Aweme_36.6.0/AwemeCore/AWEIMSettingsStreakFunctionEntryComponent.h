@interface AWEIMSettingsStreakFunctionEntryComponent : AWEIMComponentBase <AWEIMMessageListDataAction, IESIMChatSettingsItemProvider, AWEIMInputViewAtMessage> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_streakSwitchEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_streakDisplayManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
}

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)atMessageWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
