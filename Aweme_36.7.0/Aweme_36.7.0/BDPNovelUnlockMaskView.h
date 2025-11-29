@class UILabel, UIImageView, CAGradientLayer;

@interface BDPNovelUnlockMaskView : UIView

@property (retain, nonatomic) UILabel *maskText;
@property (retain, nonatomic) UIImageView *maskIcon;
@property (retain, nonatomic) UIImageView *bgBlurImage;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)showBlurImage:(id)a0 icon:(id)a1 text:(id)a2 bottomOffset:(double)a3 bottomColor:(id)a4 fontColor:(id)a5;
- (void)showIcon:(id)a0 text:(id)a1 bottomOffset:(double)a2 bottomColor:(id)a3 fontColor:(id)a4;
- (void).cxx_destruct;

@end
