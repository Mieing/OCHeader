@class IESLiveAssociateHeadVideoSelectViewModel, MJRefreshFooter, IESLiveWebpLoadingView;

@interface IESLiveAssociateHeadVideoSelectCollectionView : UICollectionView

@property (retain, nonatomic) MJRefreshFooter *loadMoreFooter;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ loadMoreBlock;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)setup;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
