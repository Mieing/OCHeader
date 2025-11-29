@interface IESIMGroupImpl.GroupManagementSpeakPermissionComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ needGlobalSwitch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ conversationBind;
    void /* unknown type, empty encoding */ speakMode;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
