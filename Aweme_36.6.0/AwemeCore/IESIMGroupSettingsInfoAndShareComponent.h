@interface IESIMGroupSettingsInfoAndShareComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ isAppear;
    void /* unknown type, empty encoding */ needUpdate;
}

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
