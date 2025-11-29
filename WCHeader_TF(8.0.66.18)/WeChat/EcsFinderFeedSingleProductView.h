@class EcsFinderFeedSingleProductGradientBgView, EcsFinderFeedSingleProductByeView, EcsFinderFeedSingleProductLogoView, EcsFinderFeedSingleProductBar, UIView, EcsFinderFeedSingleProductHeaderView, EcsFinderFeedSingleProductCardView;
@protocol EcsFinderFeedSingleProductViewDelegate;

@interface EcsFinderFeedSingleProductView : EcsFinderFeedSingleProductBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) EcsFinderFeedSingleProductHeaderView *headerView;
@property (retain, nonatomic) EcsFinderFeedSingleProductGradientBgView *bgView;
@property (retain, nonatomic) EcsFinderFeedSingleProductCardView *cardView;
@property (retain, nonatomic) EcsFinderFeedSingleProductBar *bottomBar;
@property (retain, nonatomic) EcsFinderFeedSingleProductByeView *byeView;
@property (retain, nonatomic) EcsFinderFeedSingleProductLogoView *logoView;
@property (retain, nonatomic) UIView *spaceA;
@property (retain, nonatomic) UIView *spaceB;
@property (retain, nonatomic) UIView *spaceC;
@property (weak, nonatomic) id<EcsFinderFeedSingleProductViewDelegate> delegate;

- (void)setDataVM:(id)a0;
- (void)setupUI;
- (void)onClickProductInfoWithClickType:(id)a0;
- (void).cxx_destruct;

@end
