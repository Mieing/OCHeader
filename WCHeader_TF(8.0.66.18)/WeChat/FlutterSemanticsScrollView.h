@class NSString, SemanticsObject;
@protocol UICoordinateSpace;

@interface FlutterSemanticsScrollView : UIScrollView <UIFocusItemScrollableContainer, UIScrollViewDelegate>

@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } visibleSize;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) SemanticsObject *semanticsObject;
@property (readonly, nonatomic) BOOL isDoingSystemScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBecomeFocused;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSemanticsObject:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityAttributedLabel;
- (id)accessibilityValue;
- (id)accessibilityAttributedValue;
- (id)accessibilityHint;
- (id)accessibilityAttributedHint;
- (BOOL)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)accessibilityPerformEscape;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityContainer;
- (long long)accessibilityElementCount;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void).cxx_destruct;

@end
