@class NSSet, NSIndexSet, NSString, NSMutableIndexSet, NSMutableDictionary;
@protocol RxCollectionLayoutAuxillaryOffsets;

@interface RxCollectionLayoutSolveParameters : NSObject <RxCollectionLayoutSolveResult> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryDict;
    BOOL _isFullResolve;
}

@property (readonly, nonatomic) BOOL hasInvalidatedItems;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) id<RxCollectionLayoutAuxillaryOffsets> invalidatedAuxillaryOffsets;
@property (readonly, nonatomic) BOOL isFullResolve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parametersForFullResolve;

- (void)addItemIndex:(long long)a0;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)a0;
- (id)initWithInvalidatedIndexes:(id)a0 isFullResolve:(BOOL)a1;
- (id)initWithInvalidatedIndexes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAuxillaryIndex:(long long)a0 elementKind:(id)a1;

@end
