@class UIImageView, UILabel, UIView;

@interface AWEIMMessageTabDisconnectedTipView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *tipIconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)p_setupViews;
- (void)p_layoutSubviews;
- (void)p_updateHeight;
- (void)p_didClickTip;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
