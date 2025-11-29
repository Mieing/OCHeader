@class UITableView, NSString, UILabel, UIButton;
@protocol AWEBatManTasksBaseViewControllerDelegate;

@interface AWEBatManTasksBaseViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UILabel *titleLbl;
@property (weak, nonatomic) UIButton *backBtn;
@property (weak, nonatomic) id<AWEBatManTasksBaseViewControllerDelegate> delegate;
@property (nonatomic) BOOL isShowFromDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)onBackwardClicked:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithCompletion:(id /* block */)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (double)viewWidth;

@end
