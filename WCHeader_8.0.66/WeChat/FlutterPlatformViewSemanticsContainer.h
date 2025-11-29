@class UIView;

@interface FlutterPlatformViewSemanticsContainer : SemanticsObject

@property (weak, nonatomic) UIView *platformView;

- (id)initWithBridge:(struct WeakPtr<flutter::AccessibilityBridgeIos> { struct AccessibilityBridgeIos *x0; struct RefPtr<fml::internal::WeakPtrFlag> { struct WeakPtrFlag *x0; } x1; struct DebugThreadChecker { } x2; })a0 uid:(int)a1 platformView:(id)a2;
- (id)nativeAccessibility;
- (void).cxx_destruct;

@end
