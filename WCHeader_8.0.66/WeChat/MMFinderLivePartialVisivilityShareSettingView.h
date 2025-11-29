@class MMFinderLivePartialVisivilitySettingInfo;

@interface MMFinderLivePartialVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView

@property (retain, nonatomic) MMFinderLivePartialVisivilitySettingInfo *partialSettingInfo;

- (id)initWithSettingInfo:(id)a0 initParam:(id)a1 forceDarkMode:(BOOL)a2 rootVC:(id)a3;
- (void)initSettingInfo:(id)a0;
- (id)navTitle;
- (double)getContentHeight;
- (void)reloadTableData;
- (void)updateSettingInfo:(id)a0;
- (void)updateConfirmButtonEnabled;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)a0 visibilityMode:(long long)a1 liveMode:(long long)a2;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (id)getRightViewByCurrentVisibleUsers:(double)a0;
- (id)getRightViewByCurrentVisibleTags:(double)a0;
- (id)getRightViewForVisibleUserFileListCell:(double)a0;
- (id)getCustomViewForCreateVisibleFileList;
- (void)selectVisibleContactsFromRecentSessions;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void)selectVisibleTags;
- (void).cxx_destruct;

@end
