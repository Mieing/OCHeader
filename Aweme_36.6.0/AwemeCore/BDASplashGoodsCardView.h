@class BDASplashGoodsCard, BDImageView, UILabel, BDASplashGoodsCardViewModel, UIView;

@interface BDASplashGoodsCardView : BDASplashComplianceBaseView

@property (retain, nonatomic) BDASplashGoodsCardViewModel *viewModel;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) BDASplashGoodsCard *firstGoodsCard;
@property (retain, nonatomic) BDASplashGoodsCard *secondGoodsCard;
@property (retain, nonatomic) BDASplashGoodsCard *thirdGoodsCard;
@property (retain, nonatomic) BDImageView *firstGoodsView;
@property (retain, nonatomic) BDImageView *secondGoodsView;
@property (retain, nonatomic) BDImageView *thirdGoodsView;

- (void)addGesture;
- (id)getSpecificControlsForAnimation;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)onClickGesture:(id)a0;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
