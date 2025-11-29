@interface IESIMGroupImpl.GroupSettingsNumberAndQRComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharePublicGroupQRViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareSocialGroupQRViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareGroupNumberViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_QRViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberAndQRViewModel;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
