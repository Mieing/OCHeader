@class NSMutableArray, NSRecursiveLock;

@interface FiltersBaseLogic : MMObject {
    NSRecursiveLock *_lock;
    NSMutableArray *_arrFilters;
    NSMutableArray *_arrSources;
    NSMutableArray *_arrDests;
}

- (id)init;
- (id)initWithInput:(id)a0 output:(id)a1;
- (id)initWithOrderedFilters:(id)a0 input:(id)a1 output:(id)a2;
- (id)initWithOrderedFilters:(id)a0 input:(id)a1 outputs:(id)a2;
- (void)initData;
- (void)addFilter:(id)a0;
- (void)addFilter:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceFilter:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceAllFilters:(id)a0;
- (void)removeFilter:(id)a0;
- (void)removeAllFilters;
- (void)addOutput:(id)a0;
- (void)removeOutput:(id)a0;
- (void)removeAllOutputs;
- (id)getFinalFilterChain;
- (BOOL)chainPipeline;
- (void)resetChain;
- (void).cxx_destruct;

@end
