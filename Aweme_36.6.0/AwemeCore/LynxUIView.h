@interface LynxUIView : LynxUI

+ (void)lynxLazyLoad;

- (void)gestureDidSet;
- (BOOL)enableAccessibilityByDefault;
- (void)interceptGesture:(BOOL)a0;
- (unsigned long long)getInitialOverflowType;
- (void)setContext:(id)a0;
- (id)createView;

@end
