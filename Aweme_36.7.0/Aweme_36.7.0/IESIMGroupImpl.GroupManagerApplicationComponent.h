@interface IESIMGroupImpl.GroupManagerApplicationComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, IESIMGroupSettingInfoOtherSceneSubscriberProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatar;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (id)groupSettingInfoOtherRequestParams;
- (void)updateGroupInfoOtherSceneData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
