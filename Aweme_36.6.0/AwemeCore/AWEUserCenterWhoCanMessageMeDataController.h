@class AWEUserCenterWhoCanMessageMeViewModel, NSString, AWEIMChatBlockSettingModel, NSArray;
@protocol AWEUserCenterWhoCanMessageMeUpdateDataDelegate;

@interface AWEUserCenterWhoCanMessageMeDataController : NSObject <AFDSettingSearchDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) AWEIMChatBlockSettingModel *serverModel;
@property (nonatomic) long long advancedSectionNumber;
@property (copy, nonatomic) NSString *beginningStatus;
@property (weak, nonatomic) id<AWEUserCenterWhoCanMessageMeUpdateDataDelegate> delegate;
@property (retain, nonatomic) NSArray *contentModels;
@property (retain, nonatomic) NSArray *sectionHeaderModels;
@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeViewModel *blockMessageSettingVM;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL directlyExitPageAfterPopupDismiss;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)enableUnifyViewController;
+ (id)whoCanMessageMeTitle;
+ (BOOL)enableWhoCanMsgMeAddMate;
+ (id)offlinePushDetailTitle;
+ (BOOL)blockMessageEnable;

- (void)sendRequestToChangeAdvancedSetting:(id /* block */)a0;
- (void)p_trackClickMessagePrivacy;
- (void)p_recordBeginningSelectValue;
- (void)prepareSectionContentData;
- (void)prepareSectionHeaderData;
- (void)addSectionHeaderWithTitle:(id)a0 toSectionHeaderModels:(id)a1;
- (void)addSwitchesToContentModels:(id)a0;
- (void)addOtherSettingToContentModels:(id)a0;
- (void)addAdvancedSettingToContentModels:(id)a0;
- (void)addSingleSelectItems:(id)a0 withModel:(id)a1;
- (void)addOfflinePushDetailToAdvancedSettingSection:(id)a0;
- (void)refreshServerModel;
- (void)addSelfDefinedBlockWordViewModelToAdvancedSettingSection:(id)a0;
- (BOOL)everyOneAbleToMessage;
- (void)updateWhoCanMessageMeSingleSelect:(long long)a0;
- (void)updateWhoCanMessageMe;
- (void)trackMessageBlockButtonClick;
- (void)trackBlockSwitchUpdateWithOldSwitch:(BOOL)a0 newSwitch:(BOOL)a1;
- (void)addChatBlockDurationsToAdvancedSettingSection:(id)a0;
- (void)addSmartBlockToAdvancedSettingSection:(id)a0;
- (long long)advancedSection;
- (void)sendRequestToChangeAdvancedSetting:(BOOL)a0 completion:(id /* block */)a1;
- (long long)blockDurationInDayFromSecond:(long long)a0;
- (void)showBlockDurarionActionSheet:(id)a0;
- (id)labelModelsForBlockDurarion:(id)a0 halfVC:(id)a1;
- (void)trackBlockDurationUpdateWithOldModel:(id)a0 newModel:(id)a1;
- (void)p_trackSmartBlockWithUpdateTypeIsAdd:(BOOL)a0 smartBlockType:(id)a1;
- (void)updateSelectedViewModel:(long long)a0;
- (id)selectValueToSwitchValues:(long long)a0;
- (id)selectValueToSwitchValuesV2:(long long)a0;
- (long long)currentSelectedValue;
- (void)revertSelectValue;
- (void)showErrorToast:(id)a0;
- (id)currentSwitchValues;
- (void)revertSwitchValues;
- (id)trackParamFromWhoCanMessageMeModel:(id)a0;
- (void)p_trackBlockDurationUpdate:(long long)a0;
- (void)addFriendSwitchWithModel:(id)a0 toSwitchItems:(id)a1;
- (void)addFollowSwitchWithModel:(id)a0 toSwitchItems:(id)a1;
- (void)addMaybeKnowSwitchWithModel:(id)a0 toSwitchItems:(id)a1;
- (void)addStrangerSwitchWithModel:(id)a0 toSwitchItems:(id)a1;
- (void)addChatBlockToAdvancedSettingSection:(id)a0;
- (void)autoSetIfNotNobodySetting;
- (void)trackSwitchValues;
- (id)p_valueForSwitch:(id)a0 inCurrentSwitchValues:(id)a1;
- (void)p_trackSwitchEvents:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareData;

@end
