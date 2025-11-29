@class AWEUILoadingView, DUXVacantView;

@interface AWEMRSubscribeManageBaseViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXVacantView *errorVacantView;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL showErrorVacantView;

- (void)setupViewHolder;
- (void)dismissLoadingView;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
