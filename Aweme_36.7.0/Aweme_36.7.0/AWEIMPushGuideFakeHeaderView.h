@class UIImageView, UILabel, UIView;

@interface AWEIMPushGuideFakeHeaderView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIImageView *tipsIcon;
@property (retain, nonatomic) UIView *tipsIconBackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *titlePlaceholder;
@property (retain, nonatomic) UIView *contentPlaceholder;

- (void)__setupUI;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
