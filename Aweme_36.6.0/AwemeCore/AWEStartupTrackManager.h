@interface AWEStartupTrackManager : NSObject

+ (id)sharedInstance;

- (void)activeIfNeeded;
- (void)registerNetworkNotification;
- (void)_handleConnectionChanged:(id)a0;
- (id)init;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)dealloc;

@end
