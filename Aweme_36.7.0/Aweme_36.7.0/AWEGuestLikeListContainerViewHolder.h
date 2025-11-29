@class UICollectionView, DUXVacantView, AWEUILoadingView, UIView, AWEGuestHomePageContext;

@interface AWEGuestLikeListContainerViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *vacantViewContainer;
@property (retain, nonatomic) DUXVacantView *emptyVacantView;
@property (retain, nonatomic) DUXVacantView *errorVacantView;

- (void)setupViewHolder;
- (void)dismissLoadingView;
- (void)showErrorVacantView;
- (void)showEmptyVacantView;
- (void)hideVacantView;
- (void)updateVacantViewLayout;
- (void)showToast:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
