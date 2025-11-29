@class NSDictionary, NSMutableDictionary;

@interface CachalotMonitorContext : NSObject <NSCopying> {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) NSDictionary *category;
@property (readonly, nonatomic) NSDictionary *metric;
@property (readonly, nonatomic) NSDictionary *extra;

- (void)addExtra:(id)a0;
- (void)getCategory:(id *)a0 metric:(id *)a1 extra:(id *)a2;
- (void)addCategory:(id)a0 metric:(id)a1 extra:(id)a2;
- (void)p_mergeValue:(id)a0 forKey:(id)a1;
- (id)p_safeGetValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addMetric:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCategory:(id)a0;

@end
