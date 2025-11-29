@class NSString, NSMutableDictionary;

@interface RxCollectionCompositionalLayoutSolverResolveResult : NSObject <RxCollectionCompositionalLayoutSolverResolveResult> {
    NSMutableDictionary *_insertedSupplememtaries;
    NSMutableDictionary *_insertedDecorations;
    NSMutableDictionary *_deletedSupplememtaries;
    NSMutableDictionary *_deletedDecorations;
}

@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeAdjustment;
@property (nonatomic) BOOL sectionsWereRequeried;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addDeletedAuxillaryOfElementKind:(id)a0 atIndexPath:(id)a1 isSupplementary:(BOOL)a2;
- (void)addInsertedAuxillaryOfElementKind:(id)a0 atIndexPath:(id)a1 isSupplementary:(BOOL)a2;
- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)a0;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)a0;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)a0;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)a0;

@end
