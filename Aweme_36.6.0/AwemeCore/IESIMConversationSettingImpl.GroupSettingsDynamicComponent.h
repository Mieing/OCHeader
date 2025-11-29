@interface IESIMConversationSettingImpl.GroupSettingsDynamicComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ map;
    void /* unknown type, empty encoding */ conversationID;
    void /* unknown type, empty encoding */ params;
}

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
