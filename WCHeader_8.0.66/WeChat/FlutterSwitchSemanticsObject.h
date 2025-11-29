@class UISwitch;

@interface FlutterSwitchSemanticsObject : SemanticsObject

@property (readonly, retain, nonatomic) UISwitch *nativeSwitch;

- (id)initWithBridge:(struct WeakPtr<flutter::AccessibilityBridgeIos> { struct AccessibilityBridgeIos *x0; struct RefPtr<fml::internal::WeakPtrFlag> { struct WeakPtrFlag *x0; } x1; struct DebugThreadChecker { } x2; })a0 uid:(int)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
