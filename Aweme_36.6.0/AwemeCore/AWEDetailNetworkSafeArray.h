@class NSMutableArray;

@interface AWEDetailNetworkSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;

- (id)syncQueue;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)count;

@end
