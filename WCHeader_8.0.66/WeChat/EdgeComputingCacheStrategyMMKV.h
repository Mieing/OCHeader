@interface EdgeComputingCacheStrategyMMKV : EdgeComputingCacheStrategyBase

- (void)save:(id)a0;
- (void)remove:(id)a0;
- (void)clear;
- (id)query:(id)a0;
- (unsigned long long)count;
- (id)getMMKV;
- (id)keyForDataCache:(id)a0;

@end
