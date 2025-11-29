@interface CachalotWaterFallLayout : CachalotBaseLayout

- (struct CGSize { double x0; double x1; })generateContainerSizeWithContainerWidth:(double)a0 andLayoutOriginForChildrenLayoutModels:(id)a1;
- (BOOL)isSameLayout:(id)a0;
- (double)p_interItemHorizontalSpacing;
- (id)p_anchorLayoutGroupWithItemSize:(struct CGSize { double x0; double x1; })a0 xOrigin:(double)a1 inLineLayouts:(id)a2;
- (double)p_maxYOriginInLineLayouts:(id)a0;
- (double)p_interItemVerticalSpacing;

@end
