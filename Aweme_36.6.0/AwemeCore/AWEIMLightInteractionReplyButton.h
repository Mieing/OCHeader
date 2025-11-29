@class UIImageView, UILabel;

@interface AWEIMLightInteractionReplyButton : IESIMButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ tapAction;

+ (struct CGSize { double x0; double x1; })buttonSizeWithTitle:(id)a0;

- (void)p_didTappedAction;
- (id)initWithTapAction;
- (void)updateWithURL:(id)a0 placeholder:(id)a1 title:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
