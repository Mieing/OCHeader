@class NSLock, NSMutableArray;

@interface BDCastThreadSafeMutableArray : NSObject {
    NSLock *_lock;
    NSMutableArray *_array;
}

@property (readonly, nonatomic) id lastObject;
@property (readonly, nonatomic) id firstObject;

- (void)addObjectWithoutContain:(id)a0;
- (void)performLockWithArray:(id /* block */)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (void)removeLastObject;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
