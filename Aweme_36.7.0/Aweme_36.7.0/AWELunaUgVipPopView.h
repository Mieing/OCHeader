@class UIImageView, UILabel, UIStackView;

@interface AWELunaUgVipPopView : AWELunaUgPopView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *btnStackView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *titleBgImageView;

- (id)p_lightColorNamed:(id)a0;
- (void)p_didClickMainLabel;
- (void)p_didClickSubTitle;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
