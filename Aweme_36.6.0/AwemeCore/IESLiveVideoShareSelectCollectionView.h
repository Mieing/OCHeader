@class VideoTab, MJRefreshFooter, IESLiveWebpLoadingView;

@interface IESLiveVideoShareSelectCollectionView : UICollectionView

@property (retain, nonatomic) MJRefreshFooter *loadMoreFooter;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) VideoTab *videoTab;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1 videoTab:(id)a2;
- (void).cxx_destruct;
- (void)setup;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
