@interface BSTUIGestureRecognizerObserver : NSObject

+ (id)sharedInstance;

- (SEL)getSelectorByGesture:(id)a0;
- (void)BSTClickEvent:(id)a0;
- (void)BSTHandleGesture:(id)a0;

@end
