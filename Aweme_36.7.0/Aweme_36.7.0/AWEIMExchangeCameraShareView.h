@class AWEButton, UILabel, UIImageView;

@interface AWEIMExchangeCameraShareView : UIView

@property (retain, nonatomic) AWEButton *button;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)p_setup;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)a0;
- (void)tapAction;

@end
