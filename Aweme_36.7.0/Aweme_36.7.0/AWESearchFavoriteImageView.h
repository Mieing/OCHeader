@class UIImageView, LOTAnimationView;

@interface AWESearchFavoriteImageView : UIView

@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) UIImageView *favoriteButton;
@property (retain, nonatomic) LOTAnimationView *favoriteAnimationView;

- (void)configureUI;
- (void)setIsFavoriteWithoutAnimation:(BOOL)a0;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (void)updateFavoriteButtonImage;
- (void)_stopFavoriteAnimation;
- (void)_playFavoriteAnimation;
- (void)_playUnFavoriteAnimation;
- (id)lottieDatafromGecko:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)accessKey;
- (id)initWithLightStyle:(BOOL)a0;

@end
