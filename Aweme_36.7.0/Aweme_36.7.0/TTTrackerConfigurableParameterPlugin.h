@class NSString, IRISConcurrentWrapper;

@interface TTTrackerConfigurableParameterPlugin : NSObject {
    BOOL _started;
    IRISConcurrentWrapper *concurrencyConfig;
    IRISConcurrentWrapper *concurrencyBizParameters;
}

@property (copy, nonatomic) id /* block */ loggerBlock;
@property (copy, nonatomic) NSString *appId;

- (void)applyConfiguration:(id)a0 forBizCode:(id)a1;
- (void)setBizParamters:(id)a0 forBizCode:(id)a1;
- (id)valueForKey:(id)a0 forBizCode:(id)a1;
- (void)removeForKey:(id)a0 forBizCode:(id)a1;
- (id)_GetCommonParamtersForKey:(id)a0 withParams:(id)a1 forBiz:(id)a2 withRules:(id)a3;
- (id)_GetCommonParamtersForKey:(id)a0 withParams:(id)a1 forBiz:(id)a2 withRule:(id)a3;
- (BOOL)_isFilterHit:(id)a0 forEvent:(id)a1 withParams:(id)a2;
- (id)_getObjectAtIndex:(long long)a0 forRule:(id)a1;
- (id)_getObjectsFromIndex:(long long)a0 forRule:(id)a1;
- (id)_stringify:(id)a0;
- (id)dataFilter:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (BOOL)start;

@end
