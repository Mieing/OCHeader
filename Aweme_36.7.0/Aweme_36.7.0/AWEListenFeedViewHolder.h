@class UIView, DUXLoadingParticleView, UICollectionView;
@protocol LunaListenFeedBottomViewProtocol, AWEListenFeedViewControllerInnerProtocol;

@interface AWEListenFeedViewHolder : AWEBaseListViewHolder

@property (weak, nonatomic) id<AWEListenFeedViewControllerInnerProtocol> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView<LunaListenFeedBottomViewProtocol> *bottomDiversionView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;

- (void)dismissLoading;
- (void).cxx_destruct;
- (void)showLoading;

@end
