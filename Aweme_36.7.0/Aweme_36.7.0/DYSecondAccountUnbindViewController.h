@class NSMutableDictionary, DYLoginNextActionButton, NSString, AWEUserAttributedLabelView, UIImageView, UITableView, NSMutableArray, DUXButton, DYRouterModel, UILabel, DYSecondAccountUnbindModel;

@interface DYSecondAccountUnbindViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserAttributedLabelHighlightClickDelegate>

@property (retain, nonatomic) AWEUserAttributedLabelView *subTitle;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) DUXButton *notUnbindButton;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) AWEUserAttributedLabelView *registerText;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *lastLoginTimeLabel;
@property (retain, nonatomic) DYSecondAccountUnbindModel *model;
@property (retain, nonatomic) NSMutableArray *unbindModels;
@property (retain, nonatomic) DYRouterModel *context;
@property (retain, nonatomic) NSMutableDictionary *registerHighlightClickDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)backBtnTapped;
- (void)setupNaviBar;
- (void)didTapHighlightText:(id)a0;
- (id)transforToModel:(Class)a0 rawData:(id)a1;
- (void)processLoginFailure:(id)a0 JSON:(id)a1;
- (void)processLoginSuccess:(id)a0;
- (void)loginAction;
- (BOOL)isSingleAccount;
- (void)trackMobileCheckClick:(id)a0 eventName:(id)a1;
- (void)actionBlock:(BOOL)a0;
- (void)trackMobileCheckConfirmShow;
- (void)trackMobileCheckConfirmResult:(id)a0;
- (void)loginActionWithOutTrack;
- (id)linkTextUrl;
- (void)notUnbindAction;
- (void)registerAction;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setupUI;
- (void)nextAction;

@end
