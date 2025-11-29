@class CAGradientLayer, NSShadow, UIImageView, NSString, UILabel, UIView;

@interface IESLivePlaybackUserProfileTitleView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) UIImageView *profileImageView;
@property (retain, nonatomic) UILabel *profilePrefixTitleLabel;
@property (retain, nonatomic) UIView *profileTitleContainerView;
@property (retain, nonatomic) UILabel *profileTitleLabel;
@property (retain, nonatomic) UILabel *carouselProfileTitleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) BOOL needsCarousel;
@property (copy, nonatomic) NSString *title;

- (void)stopTitleCarousel;
- (void)reloadLayoutForProfileImage:(id)a0;
- (void)setNeedsCarousel;
- (void)startTitleCarouselIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setup;

@end
