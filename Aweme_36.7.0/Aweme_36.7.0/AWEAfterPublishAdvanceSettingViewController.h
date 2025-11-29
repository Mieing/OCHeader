@class UIView, NSString, AWEAfterPublishAdvanceSettingDataController, AFDModalViewHelper, UITableView, UIButton, UIViewController, UILabel;

@interface AWEAfterPublishAdvanceSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEAfterPublishAdvanceSettingCellDelegate, AWEPanelTransitionWithBackground, AWEAdvanceSettingActionViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAfterPublishAdvanceSettingDataController *dataController;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ confirmDuetPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmCommentPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmCommentProtectionModeBlock;
@property (copy, nonatomic) id /* block */ confirmDanmakuPermissonBlock;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)p_setupViews;
- (id)initWithDataController:(id)a0;
- (void)registerTableViewCellReuse;
- (id)identifierForCardUIStyleWithOriginalID:(id)a0;
- (void)cellDidClickAtIndexPath:(id)a0 item:(id)a1;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)backButtonTapped:(id)a0;
- (double)bottomOffset;

@end
