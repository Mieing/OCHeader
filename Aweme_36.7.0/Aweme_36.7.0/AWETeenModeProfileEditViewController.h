@class UIButton, NSString, AWETeenAgeGuideManager, AWETeenModeProfileEditViewModel, UILabel, UITableView;

@interface AWETeenModeProfileEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, AWEUserMessage, AWETeenUserMessage, AWERouterViewControllerProtocol, AWETeenModeProfileEditViewControllerDelegate>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenModeProfileEditViewModel *viewModel;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UILabel *extraInfoLabel;
@property (retain, nonatomic) AWETeenAgeGuideManager *ageAlert;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didFinishUpdateMinorAwemeUser;
- (void)trackAppear;
- (void)tapAvatarCell:(id)a0 andSender:(id)a1;
- (void)tapNicknameCell:(id)a0;
- (void)tapSignatureCell:(id)a0;
- (void)tapGenderCell:(id)a0;
- (void)tapBirthdayCell:(id)a0;
- (void)submitEditInformationWithParams:(id)a0 andIndexPath:(id)a1 withCompletion:(id /* block */)a2;
- (void)didUpdateUserInfo;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)doneButtonClicked;
- (void)back;

@end
