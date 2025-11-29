@class NSString, NSArray;

@interface IESIMGroupParticipantTagSettingDetailProviderComponent : AWEIMComponentBase <IESIMGroupParticipantTagDataMessage, IESIMChatSettingsViewModelsProviderInterface, IESIMChatSettingsDataInterface> {
    void /* function */ navigationTitle;
    void /* function */ sectionModels;
    void /* unknown type, empty encoding */ avatarSize;
    void /* unknown type, empty encoding */ sectionViewModel;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ tagDataService;
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ tagItemList;
    void /* unknown type, empty encoding */ lastTagExtJsonStr;
    void /* unknown type, empty encoding */ chosenTagItem;
    void /* unknown type, empty encoding */ currentChosenTagKey;
    void /* unknown type, empty encoding */ currentTagSwitchEnable;
    void /* unknown type, empty encoding */ currentMemberTagSwitchEnable;
    void /* unknown type, empty encoding */ currentContainerModel;
    void /* unknown type, empty encoding */ isUpdating;
    void /* unknown type, empty encoding */ isNeedCustomItem;
    void /* unknown type, empty encoding */ customizedTagSchema;
    void /* unknown type, empty encoding */ isFirstLoad;
    void /* unknown type, empty encoding */ hasCustomItem;
    void /* unknown type, empty encoding */ isOpeningPopup;
    void /* unknown type, empty encoding */ trackedMiniGameBanner;
    void /* unknown type, empty encoding */ trackedMiniAppBanner;
    void /* unknown type, empty encoding */ fetchDataByTagItemChange;
    void /* unknown type, empty encoding */ bridgeSubscriberList;
}

@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic, copy) NSArray *sectionModels;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)createSectionViewModels;
- (void)didConversationPageMemoryTagDataUpdate:(id)a0;
- (void)openAuthorizedPopup;
- (void)openCustomTagSelectPage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
