@class UILabel, UIImageView, UIControl;

@interface IESLiveErrorPlaceholderView : UIView

@property (retain, nonatomic) UIControl *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ retryAction;
@property (readonly, nonatomic) unsigned long long style;

- (void)renderStyle:(unsigned long long)a0;
- (void)containerTapAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
