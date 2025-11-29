@class NSArray, NSMutableIndexSet, __RxOrderedCollectionDifferenceMoves, NSMutableArray;

@interface RxOrderedCollectionDifference : NSObject <NSFastEnumeration> {
    NSMutableIndexSet *_insertIndexes;
    NSMutableArray *_insertObjects;
    NSMutableIndexSet *_removeIndexes;
    NSMutableArray *_removeObjects;
    __RxOrderedCollectionDifferenceMoves *_moves;
}

@property (readonly, nonatomic) NSArray *insertions;
@property (readonly, nonatomic) NSArray *removals;
@property (readonly, nonatomic) BOOL hasChanges;

- (id)__changeWithType:(long long)a0 index:(unsigned long long)a1 object:(id)a2;
- (void)__enumerateChangesInDiffOrderWithBlock:(id /* block */)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (id)init;
- (unsigned long long)hash;
- (id)initWithChanges:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithInsertIndexes:(id)a0 insertedObjects:(id)a1 removeIndexes:(id)a2 removedObjects:(id)a3;
- (id)initWithInsertIndexes:(id)a0 insertedObjects:(id)a1 removeIndexes:(id)a2 removedObjects:(id)a3 additionalChanges:(id)a4;
- (id)differenceByTransformingChangesWithBlock:(id /* block */)a0;
- (id)inverseDifference;

@end
