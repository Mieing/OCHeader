@class AFDTextBubbleContentView;

@interface AFDUserListGridPanelCellBubble : AFDReusableBubble

@property (retain, nonatomic) AFDTextBubbleContentView *contentView;

- (void)setupBubbleStyle;
- (id)getDynamicBubbleColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)setupContentView;

@end
