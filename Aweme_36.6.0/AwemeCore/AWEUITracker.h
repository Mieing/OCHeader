@interface AWEUITracker : NSObject

+ (void)lazyLoad;
+ (void)awe_UITracker_run;
+ (void)enableUISwizzleIfNeeded;
+ (id)sharedInstance;

- (void)track:(id)a0 event:(id)a1 params:(id)a2;

@end
