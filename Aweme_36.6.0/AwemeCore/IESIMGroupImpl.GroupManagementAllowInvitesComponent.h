@interface IESIMGroupImpl.GroupManagementAllowInvitesComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, IESIMGroupSettingsAllowInvitesService> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ conversation;
}

@property (nonatomic) BOOL enable;

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
