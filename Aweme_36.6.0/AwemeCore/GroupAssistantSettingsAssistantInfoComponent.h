@class NSArray, NSString;

@interface GroupAssistantSettingsAssistantInfoComponent : AWEIMComponentBase <IESIMChatSettingsViewModelsProviderInterface, IESIMChatSettingsDataInterface, IESIMGroupImpl.IESIMGroupAssistantSettingsAssistantInterface> {
    void /* function */ sectionModels;
    void /* function */ navigationTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_groupAssistantEnable;
}

@property (nonatomic, copy) NSArray *sectionModels;
@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic) BOOL groupAssistantEnable;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)isAutoBigFontStyle;
- (id)createSectionViewModels;
- (void).cxx_destruct;
- (id)init;

@end
