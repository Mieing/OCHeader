@interface AWESafeMutableArray : NSMutableArray {
    struct __CFArray { } *_array;
}

- (id)syncQueue;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)count;

@end
