@class AWEIMSwipeAction, UIFont, UIColor;

@interface AWEIMSwipeActionButton : UIButton

@property (retain, nonatomic) AWEIMSwipeAction *action;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) double spacing;
@property (nonatomic) double maximumImageHeight;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleBoundingRectWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonEdgeInsetsFromOptions:(id)a0;
- (double)preferredWidthMaximum:(double)a0;
- (void)updateReconfirmStatus:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (double)imageHeight;
- (double)currentSpacing;

@end
