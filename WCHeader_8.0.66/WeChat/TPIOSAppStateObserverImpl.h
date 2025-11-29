@interface TPIOSAppStateObserverImpl : NSObject

@property int appState;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)checkSetupState;
- (void)registerApplicationObservers;
- (void)unregisterApplicationObservers;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;

@end
