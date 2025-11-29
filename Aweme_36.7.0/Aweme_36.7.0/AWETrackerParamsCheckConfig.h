@class NSMutableDictionary;

@interface AWETrackerParamsCheckConfig : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *eventToCheckItem;
@property (retain, nonatomic) NSMutableDictionary *eventToCheckParams;

+ (void)strategyWhenReplacementCheckEventWithError:(id *)a0 errorType:(unsigned long long)a1 applyObject:(id)a2;
+ (id)sharedInstance;

- (void)addItemsFrom:(id)a0;
- (void)addItem:(id)a0 forEvent:(id)a1;
- (BOOL)replacementCheckEvent:(id)a0 withOriginParams:(id)a1 newParams:(id)a2 extraInfo:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
