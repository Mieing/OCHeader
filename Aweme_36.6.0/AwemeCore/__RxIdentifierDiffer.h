@class NSIndexSet, __RxDiffableDataSourceOrderedSetI, NSString;

@interface __RxIdentifierDiffer : NSObject <__RxIdentifierDiffer> {
    BOOL _identifiersAreUnique;
}

@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *afterIdentifiers;
@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *beforeIdentifiers;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSIndexSet *updatedIndexes;
@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *movePairs;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performDiff;
- (void)_performFoundationDiffWithOptions:(long long)a0;
- (void)_performDiffWithOptions:(long long)a0;
- (void)_performHeckelDiffWithOptions:(long long)a0;
- (void)performDiffWithOptions:(long long)a0;
- (id)initWithBeforeIdentifiers:(id)a0 afterIdentifiers:(id)a1;

@end
