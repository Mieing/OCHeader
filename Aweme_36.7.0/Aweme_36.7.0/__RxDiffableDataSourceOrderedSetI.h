@class NSMutableArray;

@interface __RxDiffableDataSourceOrderedSetI : NSOrderedSet {
    struct __RxCowStorage { struct __CFSet *set; NSMutableArray *ordered; } _storage;
}

- (id)copy;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
