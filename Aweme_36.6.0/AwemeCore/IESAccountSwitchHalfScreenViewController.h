@class UIButton, IESAccountSwitchViewModel, NSDictionary, DUXContentSheet, UIView, NSString, UITableView;

@interface IESAccountSwitchHalfScreenViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *panHolderView;
@property (retain, nonatomic) UITableView *accountListTableView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESAccountSwitchViewModel *viewModel;
@property (nonatomic) double padCloseButtonHeight;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)refreshTableView;
- (id)initWithExtraDict:(id)a0;
- (void)showViewControllerInSheet;
- (void)touchCloseButton;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchAccounts;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (double)containerHeight;

@end
