@class NSMutableOrderedSet;

@interface RTVFIFOSet : RTVFIFOBaseCollection

@property (readonly, nonatomic) NSMutableOrderedSet *orderedSet;

- (void)appendObjects:(id)a0;
- (id)popObjectsWithCount:(unsigned long long)a0;
- (id)lastObject;
- (id)firstObject;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)allObjects;
- (unsigned long long)count;

@end
