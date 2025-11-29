@interface IESIMGroupImpl.GroupManagementEntryApprovalComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, IESIMGroupSettingsEntryAuditProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ conversation;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (BOOL)isEntryAuditOn;
- (void)updateSubtitleColor;
- (void).cxx_destruct;
- (id)init;

@end
