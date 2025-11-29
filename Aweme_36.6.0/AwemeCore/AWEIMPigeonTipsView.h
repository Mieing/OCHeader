@class UIVisualEffectView, IESIMButton, UILabel, UIView;

@interface AWEIMPigeonTipsView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) IESIMButton *closeBtn;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)didFetchFullDetailUser:(id)a0;
- (void)p_addSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
