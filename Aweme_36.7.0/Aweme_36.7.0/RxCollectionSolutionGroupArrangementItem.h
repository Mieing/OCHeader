@class RxCollectionLayoutItemSolver, RxCollectionLayoutItem;

@interface RxCollectionSolutionGroupArrangementItem : NSObject

@property (readonly, nonatomic) RxCollectionLayoutItemSolver *solution;
@property (readonly, nonatomic) RxCollectionLayoutItem *item;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;

- (id)initWithSolution:(id)a0;
- (void).cxx_destruct;

@end
