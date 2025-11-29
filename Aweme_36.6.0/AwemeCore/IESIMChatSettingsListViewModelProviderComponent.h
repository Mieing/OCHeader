@interface IESIMChatSettingsListViewModelProviderComponent : AWEIMComponentBase <IESIMChatSettingsViewModelsProviderInterface> {
    void /* unknown type, empty encoding */ dataService;
    void /* unknown type, empty encoding */ sectionModelMap;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)createSectionViewModels;
- (void).cxx_destruct;
- (id)init;

@end
