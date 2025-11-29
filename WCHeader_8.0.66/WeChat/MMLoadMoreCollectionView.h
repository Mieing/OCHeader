@class UIView;
@protocol MMLoadMoreCollectionViewDelegate;

@interface MMLoadMoreCollectionView : UICollectionView

@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insetsBefore;
@property BOOL isLoading;
@property (nonatomic) long long currentDirection;
@property (weak, nonatomic) id<MMLoadMoreCollectionViewDelegate> loadMoreDelegate;
@property (nonatomic) BOOL disableLoadMore;
@property (nonatomic) double beginLoadMoreOffset;
@property (nonatomic) double loadingTimeOutDuration;
@property (nonatomic) double startLoadingAnimationDuration;
@property (nonatomic) double stopLoadingAnimationDuration;
@property (nonatomic) double customOffset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)layoutSubviews;
- (void)setLoadMoreView:(id)a0 WithSize:(struct CGSize { double x0; double x1; })a1;
- (void)onScrollViewWillBeginDecelerating;
- (void)onScrollViewDidEndDecelerating;
- (void)tryStartLoadMore;
- (void)forceStartLoadAnimation;
- (void)startLoadAnimationIfNeeded;
- (BOOL)isInLoading;
- (void)startLoadMoreAnimation;
- (void)startLoadMore;
- (void)onLoadDone;
- (void).cxx_destruct;

@end
