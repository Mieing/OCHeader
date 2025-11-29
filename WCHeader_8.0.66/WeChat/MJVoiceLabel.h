@class MMUIActivityIndicatorView, UIImageView, NSString, UILabel;

@interface MJVoiceLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoading;
- (void)hideLoading;
- (void).cxx_destruct;

@end
