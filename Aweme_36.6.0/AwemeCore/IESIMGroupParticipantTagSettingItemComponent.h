@interface IESIMGroupParticipantTagSettingItemComponent : AWEIMComponentBase <IESIMGroupParticipantTagDataMessage, IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ tagDataService;
    void /* unknown type, empty encoding */ hasTrackedStatus;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)didConversationPageMemoryTagDataUpdate:(id)a0;
- (void).cxx_destruct;
- (void)updateSubtitle;
- (id)init;
- (void)dealloc;

@end
