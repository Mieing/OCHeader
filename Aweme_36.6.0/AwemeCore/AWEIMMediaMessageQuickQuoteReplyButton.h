@interface AWEIMMediaMessageQuickQuoteReplyButton : IESIMButton

@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)configWithReplyStyle:(long long)a0;
- (id)initWithTapAction;
- (void)p_didTapAction;
- (double)getEdgeInsetsLeftWidthOfLabelWithTitle:(id)a0;
- (double)getLabelWidthWithTitle:(id)a0;
- (void)setIconHidden;
- (void).cxx_destruct;
- (id)init;
- (void)show:(BOOL)a0;

@end
