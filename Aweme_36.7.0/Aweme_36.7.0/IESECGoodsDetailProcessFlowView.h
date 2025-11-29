@class NSArray, NSMutableArray;

@interface IESECGoodsDetailProcessFlowView : UIView

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *nodeViewList;
@property (retain, nonatomic) NSMutableArray *arrowLineImageList;
@property (nonatomic) double containerWidth;

- (void)configureProcessFlowViewWithElementsModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1;
- (void)makeNodeViewConstraints;
- (void)createArrowImageBetweenNodes;
- (void).cxx_destruct;

@end
