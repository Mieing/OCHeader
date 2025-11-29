@class ICBatchFetchingContext, UIView;
@protocol ICFlowBatchFetchingDelegate;

@interface ICCollectionView : UICollectionView

@property (retain, nonatomic) ICBatchFetchingContext *batchFetchingContext;
@property (retain, nonatomic) UIView *collectionFooterContainerView;
@property (retain, nonatomic) UIView *collectionHeaderContainerView;
@property (weak, nonatomic) id<ICFlowBatchFetchingDelegate> batchFetchingDelegate;
@property (nonatomic) double leadingScreensForBatching;
@property (retain, nonatomic) UIView *collectionHeaderView;
@property (retain, nonatomic) UIView *collectionFooterView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)updateCollectionHeaderViewFrame;
- (void)updateCollectionFooterViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateContainerViewFrame:(id)a0 contentView:(id)a1;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)checkForBatchFetching;
- (void)beginBatchFetchingIfNeeded:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_beginBatchFetching;
- (void)stopBatchFetching;
- (void).cxx_destruct;

@end
