@class UIImageView, UILabel, UIView, UIButton;

@interface WBSDKWebViewErrorView : UIView

@property (retain, nonatomic) UIView *buttonsContainer;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *retryButton;

- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showError:(id)a0;

@end
