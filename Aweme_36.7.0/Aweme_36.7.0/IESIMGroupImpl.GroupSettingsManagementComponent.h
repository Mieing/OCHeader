@interface IESIMGroupImpl.GroupSettingsManagementComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelOrigin;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelForOwner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelForAdmin;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortcutEntryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortcutEntryViewModel;
    void /* unknown type, empty encoding */ didShowGuide;
    void /* unknown type, empty encoding */ didTrackShowEntryView;
    void /* unknown type, empty encoding */ didTrackShowMultiGroupManageEntry;
    void /* unknown type, empty encoding */ isProcessingClick;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)hostVC_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
