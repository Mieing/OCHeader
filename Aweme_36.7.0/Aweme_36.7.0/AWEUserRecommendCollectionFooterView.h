@class UILabel, DUXLoadingParticleView, AWEBinding;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendCollectionFooterView : UICollectionReusableView

@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEBinding *dataStateBinding;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;

- (void)p_setupUI;
- (void)config;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
