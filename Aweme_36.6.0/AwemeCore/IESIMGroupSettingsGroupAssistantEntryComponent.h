@interface IESIMGroupSettingsGroupAssistantEntryComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ assistantSecUserID;
    void /* unknown type, empty encoding */ assistantUser;
    void /* unknown type, empty encoding */ aiCloneDataController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_groupAssistantEnable;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
