@class NSString, NSArray;

@interface IESIMGroupParticipantTagDetailProviderComponent : AWEIMComponentBase <IESIMChatSettingsViewModelsProviderInterface, IESIMChatSettingsDataInterface> {
    void /* function */ navigationTitle;
    void /* function */ sectionModels;
    void /* unknown type, empty encoding */ avatarSize;
    void /* unknown type, empty encoding */ sectionViewModel;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ tagDataService;
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ currentTagItem;
    void /* unknown type, empty encoding */ currentContainerModel;
    void /* unknown type, empty encoding */ isFirstLoad;
    void /* unknown type, empty encoding */ templateId;
    void /* unknown type, empty encoding */ applicationId;
    void /* unknown type, empty encoding */ isOpeningPopup;
    void /* unknown type, empty encoding */ trackedMiniGameBanner;
    void /* unknown type, empty encoding */ trackedMiniAppBanner;
    void /* unknown type, empty encoding */ bridgeSubscriberList;
}

@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic, copy) NSArray *sectionModels;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)createSectionViewModels;
- (void)openAuthorizedPopup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
