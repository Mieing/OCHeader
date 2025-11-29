@class NSString, MMLiveHalfScreenTitleBarView, UISwitch, MMFinderLiveTaskId, UIView, MMMLiveRewardQuotaSettingDetailCell, MMUILabel;
@protocol MMLiveRewardQuotaSettingSheetViewDelegate;

@interface MMLiveRewardQuotaSettingSheetView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMLiveRewardQuotaSettingViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UISwitch *settingSwitch;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *footerSeparatorLine;
@property (retain, nonatomic) MMMLiveRewardQuotaSettingDetailCell *detailCell;
@property (nonatomic) unsigned long long rewardQuota;
@property (weak, nonatomic) id<MMLiveRewardQuotaSettingSheetViewDelegate> operationDelegate;
@property (copy, nonatomic) id /* block */ closedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)hidePageSheet;
- (void)showPageSheet;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onSwitchChanged:(id)a0;
- (void)onIntroductionButtonClicked;
- (void)onDetailCellTapped;
- (void)onMMLiveRewardQuotaSettingViewChooseRewardQuota:(unsigned int)a0;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (id)liveTask;
- (double)contentViewHeight;
- (void)updateRewardConsumptionQuota;
- (void).cxx_destruct;

@end
