@interface IESIMGroupImpl.GroupSettingsNickNameComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, IESIMParticipantsDataManagerObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ participantDataController;
    void /* unknown type, empty encoding */ currentUser;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)updateGroupNicknameNotiWithNoti:(id)a0;
- (void)participantsDataManager:(id)a0 didUpdateWithNewParticipants:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
