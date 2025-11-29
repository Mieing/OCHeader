@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BUPlayableSafeArray : NSMutableArray

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *array;

- (id)initCommon;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)dealloc;
- (unsigned long long)count;

@end
