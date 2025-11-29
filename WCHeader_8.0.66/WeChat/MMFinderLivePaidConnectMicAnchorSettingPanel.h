@class MMFinderLivePaidConnectMicAnchorSetting, MMTableViewInfo, MMFinderLiveGenericPickerView, NSString, UIButton, MMUIMaskContainerView, MMFinderLivePaidConnectMicAnchorSettingConfig, MMFinderLivePaidConnectMicAnchorInfo, MMUILabel, MMUIButton, MMFinderLiveTaskId;
@protocol MMFinderLivePaidConnectMicAnchorSettingPanelDelegate;

@interface MMFinderLivePaidConnectMicAnchorSettingPanel : MMPageSheetBaseView <MMFinderLiveGenericPickerViewDelegate, MMFinderLiveConnectMicModePageSheetViewDelegate>

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *ratingButton;
@property (retain, nonatomic) MMUIButton *historyButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUIMaskContainerView *maskContainerView;
@property (weak, nonatomic) MMFinderLiveGenericPickerView *pickerView;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorSetting *initialSetting;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorSetting *latestSetting;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorSettingConfig *settingConfig;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorInfo *anchorInfo;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL isDismissedByConfirm;
@property (weak, nonatomic) id<MMFinderLivePaidConnectMicAnchorSettingPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSetting:(id)a0 settingConfig:(id)a1 info:(id)a2 taskId:(id)a3;
- (void)initUI;
- (void)reinitTableInfo;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)onPageSheetContainerBgTapped;
- (void)showWithAnimated:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)makeConnectMicDurationCell:(id)a0 cellInfo:(id)a1;
- (void)makeConnectMicCloseModeCell:(id)a0 cellInfo:(id)a1;
- (void)makeConnectMicFocusModeCell:(id)a0 cellInfo:(id)a1;
- (void)makeConnectMicPriceCell:(id)a0 cellInfo:(id)a1;
- (double)audienceBidCellHeight;
- (void)makeAudienceBidCell:(id)a0 cellInfo:(id)a1;
- (void)makeAudienceBidPriceCell:(id)a0 cellInfo:(id)a1;
- (void)makeTitleDetailCellWithCell:(id)a0 title:(id)a1 detail:(id)a2;
- (void)makeTitleDetailCellWithCell:(id)a0 title:(id)a1 detail:(id)a2 showLeadingLine:(BOOL)a3 isWecoinDesc:(BOOL)a4;
- (void)onAudienceBidDidChange:(id)a0;
- (void)onSelectConnectMicPriceCell;
- (void)onSelectAudienceBidPriceCell;
- (void)onSelectConnectMicCloseModeCell;
- (void)onSelectConnectMicFocusModeCell;
- (void)onSelectConnectMicDurationCell;
- (void)onClose;
- (void)onTapRatingButton;
- (void)onConfirm;
- (void)onTapHistory;
- (void)showGenericPickerViewWithConfig:(id)a0 pickerType:(unsigned long long)a1;
- (void)reloadTableViewMask;
- (void)pushLiteAppWithJumpInfo:(id)a0;
- (void)internalSetupAndOpenLiteAppVC:(id)a0;
- (void)livePickerView:(id)a0 didSelectItem:(id)a1 index:(unsigned long long)a2;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)a0 focusedUserId:(id)a1 userIndices:(id)a2;
- (id)liveTask;
- (void).cxx_destruct;

@end
