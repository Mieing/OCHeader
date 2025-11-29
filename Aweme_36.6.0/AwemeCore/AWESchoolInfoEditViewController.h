@class AWEProfileEditTipsView, UITableViewCell, UIView, NSString, AWESchoolInfoEditModel, UITableView, NSMutableArray, UIButton;
@protocol AWEProfileEditViewModelProtocol, AWESettingsTableViewCellProtocol;

@interface AWESchoolInfoEditViewController : UIViewController <AWEUserMessage, AWERouterViewControllerProtocol, UITableViewDataSource, UITableViewDelegate, AFDSchoolInfoEditViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEProfileEditTipsView *offlineTip;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *emptyButton;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *schoolCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *collegeCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *yearCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *educationCell;
@property (retain, nonatomic) UITableViewCell *lineCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *visibleCell;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) AWESchoolInfoEditModel *editModel;
@property (retain, nonatomic) id<AWEProfileEditViewModelProtocol> viewModel;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (nonatomic) BOOL hasChangedSchoolInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)setStatusBarBackgroundColor:(id)a0;
- (void)p_addObserver;
- (void)showMaskView;
- (void)__setupBottomButton;
- (void)emptyButtonTapped;
- (void)changedSchoolInfo;
- (void)hiddenMaskView;
- (id)submitSchoolInfoDic;
- (void)submitWithParam:(id)a0;
- (void)showAlertViewWithTitle:(id)a0 confirmTitle:(id)a1 cancelTitle:(id)a2 confirmBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)showAlertViewWithTitle:(id)a0 message:(id)a1 confirmTitle:(id)a2 cancelTitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)selectVisibleType;
- (void)showSelectSchoolViewController;
- (void)selectCollege;
- (void)selectYear;
- (void)selectEducation;
- (long long)editCellStyle;
- (BOOL)updateSucceed;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)disableInteraction;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)placeholderString;
- (void)backButtonTapped;
- (void)saveButtonTapped;

@end
