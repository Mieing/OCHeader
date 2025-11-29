@interface BDUGLocationStatusFetcher_Private : NSObject {
    int _authorizationStatus;
    BOOL _isFetchedStatus;
    BOOL _isSet;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (nonatomic) int authorizationStatus;

+ (id)sharedInstance;

- (void)onReceivedWillEnterForeground;
- (id)init;
- (void)dealloc;

@end
