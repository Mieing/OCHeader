@interface BDUGLocationLocServiceFetcher_Private : NSObject {
    BOOL _locServiceEnabled;
    BOOL _isFetchedLocService;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (nonatomic) BOOL locServiceEnabled;

+ (id)sharedInstance;

- (void)onReceivedWillEnterForegroundNotification:(id)a0;
- (id)init;
- (void)dealloc;

@end
