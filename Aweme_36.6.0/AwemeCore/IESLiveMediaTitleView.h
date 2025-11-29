@class UIStackView, NSString, UIImageView, IESLiveMediaTitleStore, UILabel, UIView, HTSLiveAmazingBackgroundView;

@interface IESLiveMediaTitleView : UIView

@property (copy, nonatomic) NSString *roomTitle;
@property (nonatomic) BOOL hideArrow;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL isUpdating;
@property (nonatomic) unsigned long long currentDirection;
@property (retain, nonatomic) UIImageView *replayTitleImage;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *carouselLabel;
@property (nonatomic) BOOL hasCarousel;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIStackView *portraitContentView;
@property (retain, nonatomic) UIStackView *statusContentView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *statusBackgroundView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *periodLabel;
@property (retain, nonatomic) IESLiveMediaTitleStore *store;
@property (retain, nonatomic) UIStackView *fifaStackView;
@property (retain, nonatomic) UIImageView *fifaLogoView;
@property (retain, nonatomic) UIView *fifaSpaceLogoView;
@property (retain, nonatomic) UIView *fifaSeparatorLine;
@property (retain, nonatomic) UILabel *fifaTitleLabel;
@property (retain, nonatomic) UILabel *fifaLandscapeLeftLabel;
@property (retain, nonatomic) UIView *fifaTitleView;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) BOOL preloading;

- (void)updateTitleWithTitle:(id)a0;
- (void)refreshLayout:(long long)a0;
- (void)updateTitleLabel:(long long)a0;
- (void)liveAccessibility;
- (void)bindingStore:(id)a0;
- (double)widthForLogo;
- (void)updateArrowDirection:(unsigned long long)a0;
- (void)liveMediaAccessibility;
- (void)stopTitleCarousel;
- (id)p_shadowStringWithText:(id)a0 size:(double)a1;
- (id)isCanCreateCarouselLabel;
- (BOOL)needCarousel;
- (void)startTitleCarouselWithLabel:(id)a0;
- (void)configStatusView:(long long)a0;
- (BOOL)needShowLogoView;
- (void)carouselAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)buildView;
- (void)didTap;
- (long long)titleLabelFontSize;

@end
