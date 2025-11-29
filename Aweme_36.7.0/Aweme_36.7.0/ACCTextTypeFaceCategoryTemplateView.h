@interface ACCTextTypeFaceCategoryTemplateView : ACCTextTypeFaceCategoryView

- (void)configWithModel:(id)a0;
- (id)accessibilityDescriptionForItem:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (Class)cellClass;
- (double)collectionHeight;

@end
