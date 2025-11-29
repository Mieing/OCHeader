@class SemanticsObject;

@interface SemanticsObjectContainer : UIAccessibilityElement {
    struct WeakPtr<flutter::AccessibilityBridgeIos> { struct AccessibilityBridgeIos *ptr_; struct RefPtr<fml::internal::WeakPtrFlag> { struct WeakPtrFlag *ptr_; } flag_; struct DebugThreadChecker { } checker_; } _bridge;
}

@property (weak, nonatomic) SemanticsObject *semanticsObject;

- (id)initWithSemanticsObject:(id)a0 bridge:(struct WeakPtr<flutter::AccessibilityBridgeIos> { struct AccessibilityBridgeIos *x0; struct RefPtr<fml::internal::WeakPtrFlag> { struct WeakPtrFlag *x0; } x1; struct DebugThreadChecker { } x2; })a1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityContainer;
- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
