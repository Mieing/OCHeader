@class UILabel, UIImageView, AWEGradientView;

@interface AWELunaUgImagePopView : AWELunaUgPopView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *imageViewMaskView;

- (void)p_didClickTitle;
- (void)p_didClickImage;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
