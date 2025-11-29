@interface IESIMGroupManagementQRCodeExpirationTimeComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ itemType;
    void /* unknown type, empty encoding */ lastExpirationHours;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
