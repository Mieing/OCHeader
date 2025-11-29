@class NSMutableDictionary;

@interface TempoMethodManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *modulesDict;
@property (retain, nonatomic) NSMutableDictionary *globalMethodDict;

- (id)resolveMethodModule:(id)a0;
- (void)registerBuiltInModules;
- (id)resolveMethod:(id)a0 forObject:(id)a1 matchOptions:(unsigned long long)a2;
- (id)resolveModule:(id)a0 method:(id)a1;
- (id)resolveGlobalMethod:(id)a0;
- (id)resolvePrototypeMethod:(id)a0 forObject:(id)a1;
- (id)resolvePropertyMethod:(id)a0 forObject:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)registerModule:(id)a0;

@end
