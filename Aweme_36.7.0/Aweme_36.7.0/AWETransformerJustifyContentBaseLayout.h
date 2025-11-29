@interface AWETransformerJustifyContentBaseLayout : AWETransformerFlexBaseLayout

- (double)calculateContainerElementAdaptiveSize;
- (double)__caculateMainAxisSizeWithContainerMainSize:(double)a0;
- (double)__caculateChildElementsMainAxisSizeWithAxisSize:(double)a0 containerMainSize:(double)a1;
- (double)adjustChildElementsMainAxisSizeWithContainerMainSize:(double)a0;
- (void)caculateChildElementsMainAxisOffsetWithAxisSize:(double)a0 containerMainSize:(double)a1;

@end
