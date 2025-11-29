@class MMFinderLivePaidConnectMicAnchorSetting, MMTableViewInfo, NSString, MicSetting_PurchaseMicSetting, MMFinderLivePaidConnectMicAnchorSettingConfig, MMFinderLiveTaskId, FinderLiveMicInfo, MMUIButton;
@protocol MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelDelegate;

@interface MMFinderLiveConnectMicAnchorModeSettingPanel : MMPageSheetBaseView <MMFinderLivePaidConnectMicAnchorSettingPanelDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (nonatomic) unsigned long long originalSelectedMode;
@property (nonatomic) unsigned long long selectedMode;
@property (nonatomic) double lastLayoutTableViewWidth;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorSetting *paidMicSetting;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorSettingConfig *paidMicSettingConfig;
@property (nonatomic) unsigned long long switchFlag;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting;
@property (retain, nonatomic) FinderLiveMicInfo *micInfo;
@property (nonatomic) BOOL directOpenPaidMicSettingOnSelection;
@property (weak, nonatomic) id<MMFinderLiveConnectMicAnchorModeSettingPanelDelegate> delegate;
@property (weak, nonatomic) id<MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate> reportDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 switchFlag:(unsigned long long)a1 purchaseMicSetting:(id)a2 micInfo:(id)a3;
- (void)initPaidMicSettingIfNeeded;
- (void)initSelectedMode;
- (void)reinitTableViewInfo;
- (void)reinitTableViewInfoAndResetHeight:(BOOL)a0;
- (void)setupPageSheetConfig;
- (void)updateConfirmButtonEnabled;
- (void)layoutSubviews;
- (void)onConfirm;
- (void)onSelectConnectMic;
- (void)onSelectPaidConnectMic;
- (void)_doSelectPaidConnectMic;
- (void)onSelectPaidConnectMicSetting;
- (void)onSelectFreeTalking;
- (void)onSelectDisable;
- (double)getSingleLineLayoutCellHeight;
- (double)getTwoLineLayoutCellHeightWithDesc:(id)a0;
- (void)updateCellInfoSeperateLine:(id)a0 needDisplay:(BOOL)a1 leftInset:(double)a2;
- (void)makeConnectMicCell:(id)a0 cellInfo:(id)a1;
- (void)makePaidConnectMicCell:(id)a0 cellInfo:(id)a1;
- (void)makePaidConnectMicSettingCell:(id)a0 cellInfo:(id)a1;
- (void)makeFreeTalkingCell:(id)a0 cellInfo:(id)a1;
- (void)makeDisableCell:(id)a0 cellInfo:(id)a1;
- (void)makeCell:(id)a0 cellInfo:(id)a1 title:(id)a2 desc:(id)a3 select:(BOOL)a4;
- (void)makeDescriptionCell:(id)a0 cellInfo:(id)a1 title:(id)a2 desc:(id)a3 descColor:(id)a4;
- (struct CGSize { double x0; double x1; })getDescriptionCellDescSize:(id)a0;
- (double)getDescriptionCellHeightWithTitle:(id)a0 desc:(id)a1;
- (BOOL)isConnectMicSelected;
- (BOOL)isPaidConnectMicSelected;
- (BOOL)isFreeTalkingSelected;
- (BOOL)isDisableSelected;
- (BOOL)isConnectMicAvailable;
- (BOOL)isPaidConnectMicAvailable;
- (BOOL)isFreeTalkingAvailable;
- (void)paidConnectMicAnchorSettingPanel:(id)a0 didConfirmWithLatestSetting:(id)a1;
- (BOOL)paidConnectMicAnchorSettingPanelCanChangeMicLayoutMode:(id)a0;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)a0;
- (id)liveTask;
- (void)reportWithSubElementType:(unsigned int)a0 micSetting:(id)a1;
- (void).cxx_destruct;

@end
