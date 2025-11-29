@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LSSafeMutableArray : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain, nonatomic) NSMutableArray *arr;

- (id)lastObject;
- (id)firstObject;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (id)array;
- (unsigned long long)indexOfObject:(id)a0;
- (void)dealloc;
- (unsigned long long)count;

@end
