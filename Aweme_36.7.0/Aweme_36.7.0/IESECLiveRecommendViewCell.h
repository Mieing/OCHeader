@class IESECLiveRecommendAuthorView, IESECGoodsPriceLabel, LOTAnimationView, IESECLiveCoverImageBGView, UILabel, UIView, IESECUIImageView;

@interface IESECLiveRecommendViewCell : IESECRecommendBaseViewCell

@property (retain, nonatomic) UIView *liveLoadingView;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *liveAudienceLabel;
@property (retain, nonatomic) IESECUIImageView *coverImageView;
@property (retain, nonatomic) IESECLiveCoverImageBGView *coverBGView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) IESECUIImageView *userIconImageView;
@property (retain, nonatomic) UIView *goodsContainerView;
@property (retain, nonatomic) UIView *liveRecommendView;
@property (retain, nonatomic) IESECUIImageView *goodsCoverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECUIImageView *adTagImageView;
@property (retain, nonatomic) IESECLiveRecommendAuthorView *authorView;

+ (double)heightForRecommendItem:(id)a0 containerWidth:(double)a1;

- (void)openLiveRoom;
- (void)configureWithRecommendItem:(id)a0 shouldShowDislikeMask:(BOOL)a1;
- (void)createRcommendReasonLabels:(id)a0;
- (void)updateDislikeMask;
- (void)openLiveRoomWithGoods:(BOOL)a0;
- (void)openLiveRoomWithGoods;
- (void).cxx_destruct;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
