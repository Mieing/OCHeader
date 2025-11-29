@class UINavigationItem, UIView, UISwitch, NSString, UIImageView, MMUINavigationBar, WXGRoamBackupPackageDetailCell, UILabel, UIScrollView;

@interface WXGRoamNewChooseRangeViewController : MMWindowViewController <IRoamBackupPackageServiceExt, WCMomentsContactTagListViewControllerDelegate>

@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) MMUINavigationBar *customNavigationBar;
@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *secondView;
@property (retain, nonatomic) UIView *allChatCell;
@property (retain, nonatomic) UIView *exactChatCell;
@property (retain, nonatomic) UIView *exactChatExtraView;
@property (retain, nonatomic) UIView *userExtraView;
@property (retain, nonatomic) UIView *labelExtraView;
@property (retain, nonatomic) UILabel *userExtraTips;
@property (retain, nonatomic) UILabel *labelExtraTips;
@property (retain, nonatomic) UILabel *autoBackupTimeTips;
@property (retain, nonatomic) UIView *timeExtraView;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *startTimeCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *endTimeCell;
@property (retain, nonatomic) UIView *allChatExcludeFoldedCell;
@property (retain, nonatomic) UIImageView *autoArrowImg;
@property (retain, nonatomic) UIImageView *chosenImg;
@property (retain, nonatomic) UIView *typeCell;
@property (retain, nonatomic) UIView *timeCell;
@property (retain, nonatomic) UISwitch *typeSwitch;
@property (retain, nonatomic) UISwitch *timeSwitch;
@property (nonatomic) BOOL isUpadte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNavBar;
- (void)setupViews;
- (void)setupChosenImg;
- (void)setupTopView;
- (void)setupSecondeView;
- (void)setupExtraView;
- (void)setupTimeExtraView;
- (void)addTopViewAction;
- (void)updateView;
- (void)onSelectContactTag;
- (void)onSwitchTime;
- (void)onSwitchType;
- (void)onCancel;
- (void)onCreate;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (void).cxx_destruct;

@end
