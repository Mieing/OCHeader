@class RichTextView;

@interface WCFinderShadowTipsView : UIView

@property (nonatomic) double topBottomMargin;
@property (retain, nonatomic) RichTextView *tipsRichTextView;

+ (id)genRichTextViewByMaxWidth:(double)a0;
+ (double)defaultHeightByWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topBottomMargin:(double)a1 bgColor:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTextColor:(id)a0;
- (void)updateFont:(id)a0;
- (void)setUpTips:(id)a0;
- (void).cxx_destruct;

@end
