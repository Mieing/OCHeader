@class NSString;

@interface DYASessionPersistence : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (copy, nonatomic) NSString *currentSessionID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
