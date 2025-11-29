@class NSString, NSMutableSet;

@interface FBSDKViewImpressionTracker : NSObject {
    NSMutableSet *_trackedImpressions;
}

@property (readonly, copy, nonatomic) NSString *eventName;

+ (id)impressionTrackerWithEventName:(id)a0;

- (id)initWithEventName:(id)a0;
- (void)dealloc;
- (void)logImpressionWithIdentifier:(id)a0 parameters:(id)a1;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void).cxx_destruct;

@end
