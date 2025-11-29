@class UIView, NSString, NSArray, IESLiveAudienceInteractiveSearchPanelViewModel, UIImageView, UIButton, UITableView, UITextField;
@protocol IESLiveAudienceInteractiveRootPanelUserService;

@interface IESLiveAudienceInteractiveSearchPanel : IESLiveInteractionPopupViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *searchBg;
@property (retain, nonatomic) UITextField *searchTextField;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UITableView *searchTableView;
@property (copy, nonatomic) NSArray *historyUsers;
@property (retain, nonatomic) IESLiveAudienceInteractiveSearchPanelViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelUserService> userService;
@property (nonatomic) BOOL isRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setupConstraint;
- (void)onSetupNavBar:(id)a0;
- (id)initWithDelegate:(id)a0 rootPanel:(id)a1 userService:(id)a2 eventContext:(id)a3 requestPage:(id)a4;
- (id)getUserForRestore:(id)a0;
- (double)calcContentHeight;
- (void)textFieldDidStartEditing:(id)a0;
- (void)pressCancelButton;
- (void)pressClearButton;
- (void)dismissNavBarItem;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupTableView;
- (void)textFieldDidChange:(id)a0;
- (void)setupViews;

@end
