@interface WAPerformanceIndexAllJSVMFootprintMemory : WAPerformanceIndexBase

@property (nonatomic) unsigned long long lastIndexNum;

- (unsigned long long)getCurrentIndexNum;
- (unsigned int)getIndexType;

@end
