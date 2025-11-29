@interface AWELaunchTrackerModule : NSObject

+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;

@end
