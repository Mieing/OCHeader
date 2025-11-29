@class UIImage, UIImageView, AWELunaUgPopViewElement, UILabel, UIView, CALayer;

@interface AWELunaUgExpandedStylePopView : AWELunaUgPopView

@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIImageView *songCoverImageView;
@property (retain, nonatomic) UIView *songCoverShadowView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleArrowIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) AWELunaUgPopViewElement *likeElement;
@property (retain, nonatomic) UIView *likeLoadingView;
@property (retain, nonatomic) AWELunaUgPopViewElement *commentElement;
@property (retain, nonatomic) UIView *commentLoadingView;
@property (retain, nonatomic) AWELunaUgPopViewElement *shareElement;
@property (retain, nonatomic) UIView *shareLoadingView;
@property (retain, nonatomic) UILabel *sloganLabel;
@property (retain, nonatomic) CALayer *topCircularGradientLayer;
@property (retain, nonatomic) CALayer *imageGradientLayer;
@property (retain, nonatomic) UIImage *coverImage;

- (void)p_addPopViewLayerIfNeeded;
- (void)p_didClickCover;
- (id)p_makeLoadingView;
- (void)configureBaseSettings;
- (void)p_didClickPlayIcon;
- (void)p_didClickMainLabel;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setUpUI;

@end
