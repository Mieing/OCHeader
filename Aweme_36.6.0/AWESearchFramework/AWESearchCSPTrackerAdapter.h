@class NSString;

@interface AWESearchCSPTrackerAdapter : NSObject <CSPTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)csp_trackEvent:(id)a0 withParams:(id)a1;

@end
