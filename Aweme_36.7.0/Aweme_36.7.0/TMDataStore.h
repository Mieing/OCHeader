@class NSMutableArray;

@interface TMDataStore : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

@property (retain, nonatomic) NSMutableArray *trackEvents;

+ (id)sharedInstance;

- (void)storeEventName:(id)a0 params:(id)a1;
- (void)uploadEvents;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
