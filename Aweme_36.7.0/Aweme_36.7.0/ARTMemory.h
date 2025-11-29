@interface ARTMemory : NSObject

@property (nonatomic) struct MemoryRecord { unsigned long long available_mem; double timestamp; } lastMemory;

- (unsigned long long)bestAvailableMemory;
- (unsigned long long)availableMemory;
- (unsigned long long)availableMemoryFor:(int)a0;
- (id).cxx_construct;

@end
