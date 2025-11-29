@class UIImageView, UILabel, UIButton;

@interface IESLivePlaybackVideoCacheStatusErrorView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_commonInit;

@end
