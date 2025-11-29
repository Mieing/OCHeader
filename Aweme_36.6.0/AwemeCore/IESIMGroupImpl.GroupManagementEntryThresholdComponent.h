@interface IESIMGroupImpl.GroupManagementEntryThresholdComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ entryLimitDict;
    void /* unknown type, empty encoding */ detailTitle;
    void /* unknown type, empty encoding */ entrySettings;
    void /* unknown type, empty encoding */ trackLimitDict;
    void /* unknown type, empty encoding */ managerInfo;
    void /* unknown type, empty encoding */ conversation;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
