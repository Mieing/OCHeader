@class UIImageView, SightIconView, UILabel, UIView;

@interface MMScreenShotForwardButton : MMUIButton

@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UIView *hightLightMaskView;
@property (retain, nonatomic) SightIconView *loadingView;

- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
