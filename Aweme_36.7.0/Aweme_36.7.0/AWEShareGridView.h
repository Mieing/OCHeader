@class NSString;

@interface AWEShareGridView : AWEShareCollectionView <UICollectionViewDelegateFlowLayout>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)collectionLayout;

- (id)initWithItems:(id)a0 hostView:(id)a1;
- (void)updateCell:(id)a0 withItem:(id)a1;
- (double)preferredInterItemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
