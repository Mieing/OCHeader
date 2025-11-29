@interface IESIMGroupPublishSettingItemComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkBuilder;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
