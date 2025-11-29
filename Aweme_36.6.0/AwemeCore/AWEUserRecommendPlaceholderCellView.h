@class AWEUserRecommendBaseCellViewLayout, AFDSkeletonLoaderView, AWEUserRecommendPlaceholderCellModel, NSString, UITableView;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendPlaceholderCellView : UIView <UITableViewDataSource, AWEUserRecommendCellViewProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AFDSkeletonLoaderView *loadingView;
@property (retain, nonatomic) AWEUserRecommendBaseCellViewLayout *layout;
@property (retain, nonatomic) AWEUserRecommendPlaceholderCellModel *model;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
+ (double)heightForModel:(id)a0 viewModel:(id)a1;
+ (double)rowHeightForViewModel:(id)a0;

- (void)configWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
