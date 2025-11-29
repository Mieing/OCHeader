@class UILabel, UIImageView, UIView;

@interface IESLiveVideoShareSelectTabItemView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIImageView *iconView;

- (void)showIconWithImage:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
