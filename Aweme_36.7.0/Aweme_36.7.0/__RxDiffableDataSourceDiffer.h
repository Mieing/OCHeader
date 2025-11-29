@class NSString;
@protocol __RxDiffableDataSourceInfo;

@interface __RxDiffableDataSourceDiffer : NSObject <__RxDiffableDataSourceDiffer>

@property (readonly, nonatomic) id<__RxDiffableDataSourceInfo> afterDataSourceInfo;
@property (readonly, nonatomic) id<__RxDiffableDataSourceInfo> beforeDataSourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)differWithBeforeDataSourceInfo:(id)a0 afterDataSourceInfo:(id)a1;

- (id)computeUpdates;
- (id)initWithBeforeDataSource:(id)a0 afterDataSource:(id)a1;
- (void).cxx_destruct;
- (id)_computeUpdatesForIdentifierBasedDiff;
- (id)_computeSectionBoundaryMovesForItemDiffer:(id)a0;
- (BOOL)_verifyForUpdates:(id)a0;
- (id)_itemUpdatesForDiffResults:(id)a0 sectionBoundaryMoves:(id)a1 deletedSections:(id)a2 insertedSections:(id)a3;
- (id)_sectionUpdatesForDiffResults:(id)a0 deletedSections:(id)a1 insertedSections:(id)a2;

@end
