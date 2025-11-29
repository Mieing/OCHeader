@class IESLiveAnimatedImageView, UIImageView;

@interface IESLiveBadgeImageView : UIView

@property (retain, nonatomic) IESLiveAnimatedImageView *animatedBadgeImageView;
@property (retain, nonatomic) UIImageView *badgeImageView;

- (void)setUpLayout;
- (void)loadBadgeWithImage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
