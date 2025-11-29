@class FlutterSemanticsScrollView;

@interface FlutterScrollableSemanticsObject : SemanticsObject

@property (retain, nonatomic) FlutterSemanticsScrollView *scrollView;

- (id)coordinateSpace;
- (id)focusItem;
- (id)initWithBridge:(struct WeakPtr<flutter::AccessibilityBridgeIos> { struct AccessibilityBridgeIos *x0; struct RefPtr<fml::internal::WeakPtrFlag> { struct WeakPtrFlag *x0; } x1; struct DebugThreadChecker { } x2; })a0 uid:(int)a1;
- (void)dealloc;
- (void)accessibilityBridgeDidFinishUpdate;
- (id)nativeAccessibility;
- (float)scrollExtentMax;
- (float)scrollPosition;
- (struct CGSize { double x0; double x1; })contentSizeInternal;
- (struct CGPoint { double x0; double x1; })contentOffsetInternal;
- (void).cxx_destruct;

@end
