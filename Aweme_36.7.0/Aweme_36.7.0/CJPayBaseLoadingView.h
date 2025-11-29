@class NSString, UIImageView, UILabel, UIView;

@interface CJPayBaseLoadingView : UIView

@property (retain, nonatomic) UIImageView *loadingIconView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (copy, nonatomic) NSString *stateDescText;

- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
