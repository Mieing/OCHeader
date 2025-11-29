@class NSOrderedSet;
@protocol __RxIdentifierDiffer, __RxDiffableDataSourceInfo;

@interface __RxDiffableSectionBoundaryMoveDetector : NSObject {
    id<__RxIdentifierDiffer> _differ;
    id<__RxDiffableDataSourceInfo> _beforeInfo;
    id<__RxDiffableDataSourceInfo> _afterInfo;
}

@property (readonly, nonatomic) NSOrderedSet *movePairs;
@property (readonly, nonatomic) BOOL didShortCircuit;

- (id)initWithItemDiffer:(id)a0 beforeDataSourceInfo:(id)a1 afterDataSourceInfo:(id)a2;
- (id)_computeMovePairsFoundation;
- (void).cxx_destruct;

@end
