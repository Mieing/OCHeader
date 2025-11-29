@class UIView;
@protocol GCLoadMoreProtocol, GCLoadingViewProtocol;

@interface GCLoadingMoreCellModel : GCViewHolderCellModel

@property (retain, nonatomic) UIView<GCLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<GCLoadMoreProtocol> loadMoreDelegate;

- (id)initWithLoadingView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)endLoading;
- (void).cxx_destruct;

@end
