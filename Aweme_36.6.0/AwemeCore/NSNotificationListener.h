@interface NSNotificationListener : NSObject {
    struct NSNotificationCallbacks { void /* function */ **x0; } *_callbacks;
}

- (id)initWithCB:(struct NSNotificationCallbacks { void /* function */ **x0; } *)a0;
- (void)registerObserver;
- (void)unregisterObserver;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;

@end
