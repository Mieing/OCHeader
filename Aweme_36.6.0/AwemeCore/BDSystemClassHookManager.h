@class NSMutableArray, NSMutableDictionary;

@interface BDSystemClassHookManager : NSObject

@property (retain, nonatomic) NSMutableArray *registerArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;

+ (void)className:(id)a0 hookManager:(id)a1 selectorName:(id)a2 callBody:(id /* block */)a3;
+ (id)computeUseTimeWithStart:(double)a0;

- (id)cacheArrayWithSelectorName:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;
- (void)registerClass:(Class)a0;
- (void)unregisterClass:(Class)a0;

@end
