@interface AWETransformerAlignItemsBaseLayout : AWETransformerFlexBaseLayout

- (void)adjustChildElementsCrossSizeWithContainerCrossSize:(double)a0;
- (void)adjustChildElementsCrossAxisOffsetWithContainerCrossSize:(double)a0;
- (double)calculateContainerElementAdaptiveSize;
- (void)adjustChildElementIfNeededWithContainerCrossSize:(double)a0;

@end
