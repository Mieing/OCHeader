@protocol RxCollectionLayoutSectionSolver, RxCollectionPreferredSizes;

@interface RxCollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject

@property (retain, nonatomic) id<RxCollectionLayoutSectionSolver> solution;
@property (retain, nonatomic) id<RxCollectionPreferredSizes> preferredSizes;

- (id)initWithSolution:(id)a0 preferredSizes:(id)a1;
- (void).cxx_destruct;

@end
