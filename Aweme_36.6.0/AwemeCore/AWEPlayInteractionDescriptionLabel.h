@class AWEPlayInteractionDescriptionContext, NSArray;

@interface AWEPlayInteractionDescriptionLabel : YYLabel {
    NSArray *_p_accessibilityElements;
}

@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (copy, nonatomic) id /* block */ hitTestBlock;

- (void)handleHighPriorityLongPress:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)didMoveToWindow;
- (void)handleLongPress:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)getAccessibilityElementWithAccessibilityString:(id)a0 accessibilityRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)setAttributedText:(id)a0;
- (void)setAccessibilityElements:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
