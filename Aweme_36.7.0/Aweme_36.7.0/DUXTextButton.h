@class UIColor, UIFont, NSString, UILabel, UIButton;

@interface DUXTextButton : UIControl

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL useInteractionEffect;
@property (retain, nonatomic) UILabel *interactionMaskView;
@property (nonatomic) unsigned long long resizingStrategy;
@property (nonatomic) unsigned long long sizeStyle;
@property (retain, nonatomic) UIColor *contentTintColor;
@property (retain, nonatomic) UIFont *contentTitleFont;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double customWidth;
@property (nonatomic) double customHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (nonatomic) BOOL adaptBigFont;

+ (id)buttonWithSizeStyle:(unsigned long long)a0;

- (id)p_titleFont;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)p_contentBackgroundColor;
- (id)p_interactionMaskColor;
- (void)showInteractionMask;
- (void)hideInteractionMask;
- (id)initWithSizeStyle:(unsigned long long)a0;
- (void)judgeResizingStraregy;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setup;
- (void)setEnabled:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
