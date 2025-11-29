@class UIImageView, AWEGradientView;

@interface AWEListenFeedBackgroundGradientView : UIView

@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEGradientView *topGradientView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
