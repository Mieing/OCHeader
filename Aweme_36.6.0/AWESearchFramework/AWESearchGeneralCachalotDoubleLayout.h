@class NSNumber;

@interface AWESearchGeneralCachalotDoubleLayout : CachalotBaseLayout

@property (retain, nonatomic) NSNumber *customDivisionNumber;

- (struct CGSize { double x0; double x1; })generateContainerSizeWithContainerWidth:(double)a0 andLayoutOriginForChildrenLayoutModels:(id)a1;
- (BOOL)isSameLayout:(id)a0;
- (double)preferredChildLayoutWidthWithContainerWidth:(double)a0;
- (double)p_widthWithContainerWidth:(double)a0;
- (unsigned long long)p_divisionNumber;
- (double)p_interItemHorizontalSpacing;
- (double)p_interItemVerticalSpacing;
- (void).cxx_destruct;

@end
