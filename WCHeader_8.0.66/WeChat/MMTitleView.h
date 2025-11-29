@class UIFont, UIGestureRecognizer;
@protocol MMTitleViewDelegate;

@interface MMTitleView : MMBarItemCustomView

@property (retain, nonatomic) UIGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<MMTitleViewDelegate> delegate;
@property (nonatomic) BOOL forceAccessibilityElementDisabled;
@property (nonatomic) long long aligment;
@property (retain, nonatomic) UIFont *titleFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setTitle:(id)a0;
- (void)setSubTitle:(id)a0;
- (id)getTitle;
- (id)getSubTitle;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)onTapAtTitleView:(id)a0;
- (void).cxx_destruct;

@end
