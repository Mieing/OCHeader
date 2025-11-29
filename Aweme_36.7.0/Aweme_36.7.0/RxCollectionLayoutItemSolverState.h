@class NSArray, NSDictionary, RxRTree;
@protocol RxCollectionLayoutAuxillaryOffsets;

@interface RxCollectionLayoutItemSolverState : NSObject {
    NSArray *_itemFrames;
    NSArray *_auxillaryFrames;
    NSDictionary *_supplementaryDictByKindIndex;
    id<RxCollectionLayoutAuxillaryOffsets> _supplementaryFrameOffsets;
    RxRTree *_geometricIndexer;
}

@property (readonly, nonatomic) NSArray *auxillaryFrames;
@property (readonly, nonatomic) NSArray *itemFrames;
@property (readonly, nonatomic) long long itemFrameCount;
@property (readonly, nonatomic) NSArray *solutionFrames;
@property (readonly, nonatomic) long long supplementaryFrameCount;
@property (readonly, nonatomic) id<RxCollectionLayoutAuxillaryOffsets> supplementaryFrameOffsets;
@property (readonly, nonatomic) NSDictionary *supplementaryDictByKindIndex;
@property (readonly, nonatomic) NSArray *availableLayoutSpaces;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } solvedFittingFrame;
@property (readonly, nonatomic) RxRTree *geometricIndexer;

- (id)initWithSolutionFrames:(id)a0 itemFrameCount:(long long)a1 supplementaryFrameCount:(long long)a2 availableLayoutSpaces:(id)a3 solvedFittingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)__generateGeometricIndexer;
- (void)__generateMemoizedSolutionFramesBasedData;
- (void).cxx_destruct;

@end
