@interface BDLocationSecurity : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _isForegroundMutex;
    BOOL _isForeground;
}

+ (id)sharedSecurity;

- (void)_onReceivedWillEnterForegroundNotification:(id)a0;
- (void)_onReceivedWillEnterBackgroundNotification:(id)a0;
- (BOOL)canRequestLocation;
- (BOOL)canRequestLocationCache;
- (id)init;
- (void)dealloc;
- (BOOL)isInForeground;

@end
