@class AWETeenProfileSettingSliderCell, AWETeenSettingItemModel, UIImageView, NSString, UIView, AWETeenProfileSettingSliderViewModel, UITableView;

@interface AWETeenProfileSettingSliderViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWETeenProfileSettingSliderViewModelDelegate, AWEDigitalWellbeingMessage, AWETeenSettingBaseViewModelDelegate>

@property (retain, nonatomic) UIImageView *tabBarImageView;
@property (retain, nonatomic) UIView *viewMask;
@property (retain, nonatomic) UIView *accessibilityView;
@property (retain, nonatomic) UIView *menuBackgroundView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenProfileSettingSliderViewModel *viewModel;
@property (nonatomic) BOOL isAccountOn;
@property (weak, nonatomic) AWETeenProfileSettingSliderCell *digitalWellbeingCell;
@property (weak, nonatomic) AWETeenSettingItemModel *digitalWellbeingModel;
@property (nonatomic) BOOL needReload;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ didClickTeenEntranceCellBlock;
@property (copy, nonatomic) id /* block */ didClickEyeProtectionCellBlock;
@property (copy, nonatomic) id /* block */ didClickHelpDeskCellBlock;
@property (copy, nonatomic) id /* block */ didClickWalletCellBlock;
@property (copy, nonatomic) id /* block */ didClickBalanceWithdrawCellBlock;
@property (copy, nonatomic) id /* block */ didClickSettingCellBlock;
@property (copy, nonatomic) id /* block */ didClickContentPreferCellBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewStyle;
+ (double)sliderMenuWidth;
+ (double)sliderMenuTopInset;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)registerMessage;
- (void)refreshView;
- (void)unregisterMessage;
- (id)digitalWellbeingStatusString;
- (void)dismissAnimation:(id)a0;
- (void)updateTabBarImageView:(id)a0;
- (void)updateViewsWithOriginX:(double)a0;
- (void)setupWhenViewWillAppear;
- (void)p_layoutForPad;
- (id)createTableView;
- (void)serviceAndOrderCellTapped;
- (void)publicWelfareCellTapped;
- (void)settingsCellTapped;
- (void)teenEntranceCellTapped;
- (void)eyeProtectionCellTapped;
- (void)helpDeskCellTapped;
- (void)walletCellTapped;
- (void)balanceWithdrawCellTapped;
- (void)contentPreferCellTapped;
- (void)highlightItemWithType:(long long)a0;
- (void)trackShowRingtoneService;
- (BOOL)hideAccountList;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (void)setupAccessibility;

@end
