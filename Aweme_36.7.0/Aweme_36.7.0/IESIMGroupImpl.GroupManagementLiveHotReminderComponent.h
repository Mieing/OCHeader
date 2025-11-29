@interface IESIMGroupImpl.GroupManagementLiveHotReminderComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isLiveWindowDaren;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)didTapTipsIcon;
- (void).cxx_destruct;
- (id)init;

@end
