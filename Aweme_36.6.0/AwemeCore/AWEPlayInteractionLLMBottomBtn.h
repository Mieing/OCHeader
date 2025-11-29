@class UILabel, UIImageView, UITapGestureRecognizer;

@interface AWEPlayInteractionLLMBottomBtn : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)buttonWidthWithIcon:(BOOL)a0 title:(id)a1;
+ (id)titleLabelFont;

- (void)updateInnerLayout;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (void)setupUI;
- (void)tapped:(id)a0;

@end
