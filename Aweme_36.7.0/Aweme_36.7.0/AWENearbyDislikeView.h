@class UIButton, UILabel, UIView;

@interface AWENearbyDislikeView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UILabel *dislikeLabel;
@property (copy, nonatomic) id /* block */ didClickDislikeBlock;
@property (copy, nonatomic) id /* block */ didClickBackgroundBlock;

- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)p_backgroundClicked;
- (void)p_dislikeButtonClicked;
- (void)p_relayout;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismiss:(BOOL)a0;

@end
