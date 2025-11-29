@class NSMutableArray;

@interface __RxDiffableDataSourceOrderedSetM : NSMutableOrderedSet {
    struct __RxCoW { struct __RxCowStorage *x0; BOOL x1; } *_cow;
    struct __RxCowStorage { struct __CFSet *set; NSMutableArray *ordered; } _storage;
}

- (void)rx_mutate;
- (id)copy;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableCopy;
- (unsigned long long)indexOfObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
