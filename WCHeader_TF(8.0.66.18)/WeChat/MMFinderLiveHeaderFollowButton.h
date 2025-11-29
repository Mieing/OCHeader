@class UIImageView;

@interface MMFinderLiveHeaderFollowButton : MMUIButton

@property (retain, nonatomic) UIImageView *icon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateIconColor:(id)a0;
- (void)startAnimation;
- (void)executeFollowAnimation;
- (void)executeFollowAnimationAgain;
- (void).cxx_destruct;

@end
