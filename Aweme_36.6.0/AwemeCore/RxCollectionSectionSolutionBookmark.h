@class RxCollectionPreferredSizes, RxCollectionLayoutSection;
@protocol RxCollectionLayoutSectionSolver;

@interface RxCollectionSectionSolutionBookmark : NSObject

@property (readonly, nonatomic) id<RxCollectionLayoutSectionSolver> solution;
@property (readonly, nonatomic) RxCollectionLayoutSection *section;
@property (readonly, nonatomic) RxCollectionPreferredSizes *preferredSizes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } globalFrame;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } orthogonalContentLayoutFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orthogonalContentSize;

- (id)initWithSolution:(id)a0 globalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 section:(id)a3 preferredSizes:(id)a4;
- (id)copyWithGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSolution:(id)a0 globalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 section:(id)a3;
- (void).cxx_destruct;
- (id)description;

@end
