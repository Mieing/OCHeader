@interface CachalotStickyLayout : CachalotBaseLayout

- (struct CGSize { double x0; double x1; })generateContainerSizeWithContainerWidth:(double)a0 andLayoutOriginForChildrenLayoutModels:(id)a1;
- (BOOL)isSameLayout:(id)a0;
- (void)p_markAllChildrenSticky:(id)a0;
- (BOOL)isForceSticky;
- (void)customUpdateStickyChild:(id)a0;
- (double)topStickyThreshold;

@end
