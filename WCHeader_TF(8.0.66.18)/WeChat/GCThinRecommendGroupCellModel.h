@interface GCThinRecommendGroupCellModel : GCRecommendGroupCellModel

- (Class)bindCellClass;
- (double)widthForCondition:(id)a0;
- (double)widthForTag:(id)a0;
- (double)conditionViewHeight:(double)a0;
- (double)tagLineViewHeight:(double)a0;
- (double)fitCollectionViewWidth:(id)a0;
- (double)descLineHeightForWidth:(double)a0 maxLine:(long long)a1;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (double)rightSpace;
- (id)rightBtnText;
- (double)condtionGroupMaxWidthForWidth:(double)a0;

@end
