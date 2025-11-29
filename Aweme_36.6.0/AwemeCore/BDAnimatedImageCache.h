@class NSMutableDictionary;

@interface BDAnimatedImageCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *frameCaches;

- (id)safeObjectForKey:(id)a0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *)cacheLock;
- (void).cxx_destruct;
- (id)init;

@end
