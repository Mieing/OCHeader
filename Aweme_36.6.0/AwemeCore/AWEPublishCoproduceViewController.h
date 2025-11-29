@class AWEFeedInsetsLabel, UIView, NSString, DUXNavigationBar, AWEPublishCoproduceViewModel, UIButton, UITableView, AWECoProduceFooterView, AWECoproduceDescriptionAlertView;

@interface AWEPublishCoproduceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEPublishCoproduceViewModelDelegate, AWECoCreatorRoleSelectorViewControllerProtocol>

@property (retain, nonatomic) AWEFeedInsetsLabel *tipPublishRemainTimes;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWECoProduceFooterView *footer;
@property (retain, nonatomic) UIView *footerContainer;
@property (retain, nonatomic) AWEPublishCoproduceViewModel *coProduceViewModel;
@property (retain, nonatomic) AWECoproduceDescriptionAlertView *descriptionAlertView;
@property (nonatomic) BOOL canEdit;
@property (nonatomic) long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissContainerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setEvent;
- (void)completeButtonTapped:(id)a0;
- (id)initWithCoProduceSettings:(id)a0 fromDraft:(BOOL)a1 canEdit:(BOOL)a2 editedCoproducerList:(id)a3 cancelBlock:(id /* block */)a4 completionBlock:(id /* block */)a5 logExtra:(id)a6;
- (void)setCoCreateRemainTimesTip;
- (void)setCoproduceAddUserTableViewCellUsable:(BOOL)a0;
- (void)showCoCreatorAlertInfoV2;
- (id)getRemainTimesDate;
- (void)openWebViewPage:(id)a0;
- (void)showDeleteDialogWithCell:(id)a0;
- (void)tryMakeFooterToTableView;
- (void)tryMakeFooterToView;
- (void)showDescViewController;
- (void)dismissRoleSelect;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismissViewController;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;
- (void)reloadTableView;

@end
