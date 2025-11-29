@class UIImageView, UILabel;

@interface AWETextLoadingView : UIView

@property (retain, nonatomic) UIImageView *loadingLogo;
@property (retain, nonatomic) UILabel *label;

- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
