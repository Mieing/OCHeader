@class NSMutableDictionary, NSMutableArray;

@interface IESECBlenderPrefetchDataManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSMutableArray *prefetchIds;
@property (retain, nonatomic) NSMutableDictionary *cbListener;

+ (id)sharedInstance;

- (void)getPrefetchRes:(id)a0 cb:(id /* block */)a1;
- (void)savePrefetchRes:(id)a0 apiName:(id)a1 res:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
