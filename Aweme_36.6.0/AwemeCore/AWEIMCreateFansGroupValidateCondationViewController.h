@class NSString, AWEIMCreateFansGroupValidationTableHeaderView, AWEIMCreateFansGroupValidateCondationViewModel, UITableView;

@interface AWEIMCreateFansGroupValidateCondationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) AWEIMCreateFansGroupValidationTableHeaderView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMCreateFansGroupValidateCondationViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPopupViewOnViewController:(id)a0 viewModel:(id)a1;

- (void)__setupUI;
- (void)updateViewModel:(id)a0;
- (void)updateTitleImageView;
- (id)initWithVM:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
