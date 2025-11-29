@class IESLiveMyLiveTabViewModel, NSString, UITableView;
@protocol IESLiveMyLiveTabPageViewCellDelegate;

@interface IESLiveMyLiveTabPageViewCell : UICollectionViewCell <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, IESLiveRefreshDelegate, IESLiveMyLiveTabCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveMyLiveTabViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveMyLiveTabPageViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore:(id)a0;
- (void)scrollView:(id)a0 willBeginRefreshWithRefreshType:(unsigned long long)a1;
- (id)scrollView:(id)a0 viewForRefreshWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (double)scrollView:(id)a0 heightForRefreshViewWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (void)updateWithPageViewModel:(id)a0;
- (BOOL)didScrollToTop;
- (BOOL)isScrollPanGesture:(id)a0;
- (void)updateDslData:(id)a0 withCell:(id)a1;
- (void)resetRefreshWhenNoMoreData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupViews;

@end
