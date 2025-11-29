@class UITableView, NSString, UIView, UILabel, UIButton;
@protocol AWEPublishAdvanceSettingsDataControllerProtocol, AWEPublishAdvanceSettingsPopupMenuViewControllerDelegate;

@interface AWEPublishAdvanceSettingsTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEPublishAdvanceSettingsCellDelegate, AWEPublishAdvanceSettingsDataControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL hasShownProductDetect;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<AWEPublishAdvanceSettingsDataControllerProtocol> dataController;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsPopupMenuViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL shouldAddNavigationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (id)initWithDataController:(id)a0;
- (void)registerTableViewCellReuse;
- (id)identifierForCardUIStyleWithOriginalID:(id)a0;
- (void)cellDidClickAtIndexPath:(id)a0 item:(id)a1;
- (id)userDeclarationScene;
- (void)onJoinMixInfoUpdateWith:(id)a0;
- (void)onTipButtonClickAtIndexPath:(id)a0;
- (void)onAlertConfirmClickAtIndexPath:(id)a0;
- (void)onSwitherToggled:(BOOL)a0 atIndexPath:(id)a1;
- (void)p_trackProductDetectShow;
- (void)p_trackPageShow;
- (double)p_menuHeight;
- (double)contentHeight;
- (void)reloadData;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (double)sectionFooterHeight;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)backButtonTapped:(id)a0;
- (double)bottomOffset;

@end
