@class UILabel, UIImageView, UIView;

@interface WCFinderLiveRateAutoIncreaseTipView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *playbackSpeedLabel;
@property (retain, nonatomic) UIImageView *firstPlayIcon;
@property (retain, nonatomic) UIImageView *secondPlayIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)layoutView;
- (id)genUIImageView;
- (void)startAnimation;
- (void)stopAnimation;
- (void).cxx_destruct;

@end
