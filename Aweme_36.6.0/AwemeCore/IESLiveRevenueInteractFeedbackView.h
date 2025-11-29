@class UITableView, IESLiveRevenueInteractFeedbackViewModel, NSString, UIView, IESLiveRevenueInteractFeedbackStyleConfig, RACCompoundDisposable;

@interface IESLiveRevenueInteractFeedbackView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (nonatomic) unsigned long long theme;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackStyleConfig *styleConfig;
@property (retain, nonatomic) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)selectedStatusChanged:(BOOL)a0;
- (double)heightForCategoryCellWithOptions:(id)a0;
- (double)heightForDetailCell;
- (id)functionCategoryCellForTableView:(id)a0 indexPath:(id)a1;
- (id)functionDetailCellForTableView:(id)a0 indexPath:(id)a1;
- (id)functionIssueCellForTableView:(id)a0 indexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 theme:(unsigned long long)a2;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)layoutUI;

@end
