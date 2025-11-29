@class MMFinderLiveSettingVisivilitySettingInfo, NSMutableArray;

@interface MMFinderLiveSettingVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView

@property (retain, nonatomic) MMFinderLiveSettingVisivilitySettingInfo *settingInfo;
@property (retain, nonatomic) NSMutableArray *requiredContacts;
@property (retain, nonatomic) NSMutableArray *requiredTags;
@property (retain, nonatomic) NSMutableArray *requiredFiles;
@property (retain, nonatomic) NSMutableArray *selectedContacts;
@property (retain, nonatomic) NSMutableArray *selectedTags;
@property (retain, nonatomic) NSMutableArray *selectedFiles;
@property (retain, nonatomic) NSMutableArray *disabledContacts;
@property (retain, nonatomic) NSMutableArray *disabledTags;
@property (retain, nonatomic) NSMutableArray *disabledFiles;
@property (retain, nonatomic) NSMutableArray *displayContacts;
@property (retain, nonatomic) NSMutableArray *displayTags;
@property (retain, nonatomic) NSMutableArray *displayFiles;
@property (nonatomic) unsigned long long originalMode;
@property (nonatomic) unsigned long long currentMode;

- (id)initWithSettingInfo:(id)a0 initParam:(id)a1 rootVC:(id)a2;
- (BOOL)isTransferToPartialInvisible;
- (BOOL)isContinuePartialInvisible;
- (BOOL)isContinuePartialVisible;
- (void)resetSettingInfo;
- (void)resetContactArrays;
- (void)resetTagArrays;
- (void)resetFileArrays;
- (void)reloadTableData;
- (id)settingSelectedVisibleFileLists;
- (BOOL)onShouldFilterContact:(id)a0;
- (void)onSelectDisabledContact:(id)a0;
- (void)customParamWithSelectContactsFromRecentSessions:(unsigned int)a0 selectedContacts:(id)a1 viewController:(id)a2;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)customParamWithController:(id)a0;
- (void)contactTagListViewController:(id)a0 onSelectDisabledTag:(id)a1;
- (BOOL)contactTagListViewController:(id)a0 onShouldFilterTag:(id)a1;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)a0 visibilityMode:(long long)a1 liveMode:(long long)a2;
- (void)onWCFinderLiveRosterSelectDisabledFile:(id)a0;
- (BOOL)onWCFinderLiveRosterShouldFilterFile:(id)a0;
- (BOOL)isChangeModeDisabled;
- (BOOL)isPartVisibilityMode;
- (double)getContentHeight;
- (void)updateSettingInfo:(id)a0;
- (void)updateConfirmButtonEnabled;
- (id)navTitle;
- (id)getDescriptionForCurrentSetting;
- (id)getChooseVisibilityDetailView;
- (id)getRightViewByCurrentVisibleUsers:(double)a0;
- (id)getRightViewByCurrentVisibleTags:(double)a0;
- (id)getRightViewForVisibleUserFileListCell:(double)a0;
- (id)currentRealAllVisibilityFileList:(id)a0 selectedVisibleFileLists:(id)a1;
- (id)getCustomViewForCreateVisibleFileList;
- (void)chooseVisibilityMode;
- (void)selectVisibleContactsFromRecentSessions;
- (void)selectVisibleTags;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void).cxx_destruct;

@end
