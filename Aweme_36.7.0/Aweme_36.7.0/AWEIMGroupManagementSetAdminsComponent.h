@interface AWEIMGroupManagementSetAdminsComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, IESIMParticipantsDataManagerDelegate> {
    void /* unknown type, empty encoding */ participantDataController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)iesim_participantsDataSourceDidUpdate;
- (void).cxx_destruct;
- (id)init;

@end
