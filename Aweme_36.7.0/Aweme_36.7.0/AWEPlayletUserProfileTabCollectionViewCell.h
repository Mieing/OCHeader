@class UILabel, AWEPlayletCellMaskView, UIImageView, AWEDiscoverDInsetLabel, AWEGradientView, UIView, AWEPaymentBadgeView;

@interface AWEPlayletUserProfileTabCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEDiscoverDInsetLabel *seriesLabel;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) AWEDiscoverDInsetLabel *topSerieslabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) AWEPlayletCellMaskView *cellMaskView;

+ (id)identifier;

- (long long)strategyInformationType;
- (id)seriesLabelFont;
- (id)playLabelFont;
- (void)configWithModel:(id)a0 withMaskTitle:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
