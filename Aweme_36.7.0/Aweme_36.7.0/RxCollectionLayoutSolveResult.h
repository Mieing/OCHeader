@class NSString, NSMutableDictionary, NSMutableIndexSet;

@interface RxCollectionLayoutSolveResult : NSObject <RxCollectionLayoutSolveResult> {
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
    NSMutableIndexSet *_invalidatedIndexes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)invalidatedIndexes;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)a0;
- (void)addInvalidatedItemIndex:(long long)a0;
- (void)addInvalidatedItemIndexes:(id)a0;
- (void)addInvalidatedItemIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addInvalidatedSupplementariesWithOffsets:(id)a0;
- (void).cxx_destruct;
- (id)invalidatedAuxillaryKinds;
- (id)init;
- (void)addInvalidatedAuxillaryOfKind:(id)a0 index:(long long)a1;
- (void)addInvalidatedAuxillaryOfKind:(id)a0 indexes:(id)a1;
- (id)invalidatedAuxillaryOffsets;

@end
