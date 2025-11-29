@class NSMutableDictionary;

@interface FurionDataStash : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *stashSourceMap;

- (id)getFactorsWithQueryGroups:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (void)addFactor:(id)a0 value:(id)a1 group:(id)a2 dataSource:(id)a3;
- (id)getFactorWithKey:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
