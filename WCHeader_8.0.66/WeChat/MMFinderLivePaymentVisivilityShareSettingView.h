@class MMFinderLivePaymentSettingView, NSString, MMCommonActionSheetPicker, MMFinderLivePaymentVisivilitySettingInfo, MMFinderLivePaymentTrialModeSettingView;

@interface MMFinderLivePaymentVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView <MMFinderLivePaymentSettingViewDelegate, MMFinderLivePaymentTrialModeSettingViewDelegate, MMCommonActionSheetPickerDelegate>

@property (retain, nonatomic) MMFinderLivePaymentVisivilitySettingInfo *paymentSettingInfo;
@property (retain, nonatomic) MMFinderLivePaymentSettingView *paymentSettingPanel;
@property (retain, nonatomic) MMFinderLivePaymentTrialModeSettingView *paymentTrialModeSettingView;
@property (retain, nonatomic) MMCommonActionSheetPicker *startTimePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettingInfo:(id)a0 initParam:(id)a1 forceDarkMode:(BOOL)a2 rootVC:(id)a3;
- (void)initSettingInfo:(id)a0;
- (id)navTitle;
- (double)getContentHeight;
- (double)getActualContentHeight;
- (void)reloadTableData;
- (void)onConfirm;
- (void)updateSettingInfo:(id)a0;
- (void)updateConfirmButtonEnabled;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)a0 visibilityMode:(long long)a1 liveMode:(long long)a2;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)layoutSettingTableView;
- (double)getSettingTableHeight;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (id)getRightViewByCurrentPayPrice;
- (id)getRightViewByCurrentTrialMode;
- (id)getRightViewByCurrentTrialTime;
- (id)getRightViewByCurrentFreeUsers:(double)a0;
- (id)getRightViewByCurrentVisibleTags:(double)a0;
- (id)getRightViewForFreeUserFileListCell:(double)a0;
- (id)getCustomViewForCreateFreeFileList;
- (id)getFormatTrialTimeString;
- (id)getDatePickerData;
- (id)getHourDataWithDayComponent:(long long)a0;
- (id)getMinuteDataWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getMinuteArrWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getHourArrWithDayComponent:(long long)a0;
- (long long)getNearestIndexWithTarggetItem:(id)a0 itemList:(id)a1;
- (void)showPaymentPriceSettingView;
- (void)showPaymentPreviewModeView;
- (void)showStartTimePicker;
- (void)selectFreeContactsFromRecentSessions;
- (void)selectFreeTags;
- (void)selectFreeFileListFromAllVisibilityFileLists;
- (void)onLiveMemberFreeSwitchValueChange:(id)a0;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)a0;
- (void)onMMFinderLivePaymentSettingViewClosed:(id)a0;
- (void)onUpdatePurchaseLivePreviewType:(long long)a0;
- (void)onPaymentTrialModeSettingViewClosed:(id)a0;
- (void)commonPickerConfirm:(id)a0 selectedRows:(id)a1;
- (void)commonActionSheetPicker:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2 pickItem:(id)a3;
- (void)commonPickerDismissed:(id)a0;
- (void).cxx_destruct;

@end
