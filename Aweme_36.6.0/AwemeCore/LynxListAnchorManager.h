@interface LynxListAnchorManager : NSObject

@property (nonatomic) BOOL isVerticalLayout;
@property (nonatomic) long long numberOfColumns;

- (long long)fromBegin:(id)a0 anchorPolicies:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 layoutInfo:(id)a2;
- (long long)fromEnd:(id)a0 anchorPolicies:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 layoutInfo:(id)a2;
- (id)findBottomMostIndexInArray:(id)a0 skipRemoved:(BOOL)a1;
- (id)findTopMostIndexInArray:(id)a0 skipRemoved:(BOOL)a1;
- (long long)generateAnchorCellInBottomSide:(id)a0 layoutInfo:(id)a1;
- (long long)generateAnchorCellInUpperSide:(id)a0 layoutInfo:(id)a1;
- (long long)fromBeginForRemoval:(id)a0 anchorPolicies:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 layoutInfo:(id)a2 deleteIndexes:(id)a3;
- (long long)fromEndForRemoval:(id)a0 anchorPolicies:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 layoutInfo:(id)a2 deleteIndexes:(id)a3;
- (long long)generateAnchorCellInUpperSide:(id)a0 layoutInfo:(id)a1 deleteIndexes:(id)a2;
- (long long)closestAttributesToUpperVisibleBound:(long long)a0 inColumn:(id)a1;
- (long long)closestAttributesToLowerVisibleBound:(long long)a0 inColumn:(id)a1;
- (double)orientationBottomOfCell:(id)a0;
- (double)orientationTopOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)indexOf:(id)a0 inColumn:(id)a1 low:(long long)a2 high:(long long)a3;
- (long long)findAnchorCell:(id)a0 anchorPolicies:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 layoutInfo:(id)a2;
- (long long)findAnchorCellForRemoval:(id)a0 anchorPolicies:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 layoutInfo:(id)a2 deleteIndexes:(id)a3;
- (id)init;

@end
