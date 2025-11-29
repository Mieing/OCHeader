@class UIStackView, UIImageView, UILabel, UIView;

@interface AWELunaUgMiniStylePopView : AWELunaUgPopView

@property (retain, nonatomic) UIImageView *songCoverImageView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIStackView *btnStackView;

- (void)p_didClickMainButton;
- (void)p_didClickCover;
- (void)p_didClickMainLabel;
- (void)p_didClickSubTitle;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
