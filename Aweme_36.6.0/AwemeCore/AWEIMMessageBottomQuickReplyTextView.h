@class UILabel, UIView;

@interface AWEIMMessageBottomQuickReplyTextView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTapAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
