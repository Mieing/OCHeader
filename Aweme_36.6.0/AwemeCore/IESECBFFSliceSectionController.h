@class IESECBFFRowSectionLayout, UICollectionView, IESECGoodsDetailSectionObject, IESECGoodsDetailSliceManager, IESECGoodsDetailImagePreloader;

@interface IESECBFFSliceSectionController : IESECGoodsDetailBaseSectionController

@property (retain, nonatomic) IESECBFFRowSectionLayout *sectionLayout;
@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) IESECGoodsDetailSectionObject *sectionObject;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (retain, nonatomic) IESECGoodsDetailImagePreloader *imagePreloader;

- (id)cellForItemAtIndex:(long long)a0;
- (double)getSliceHeightAtIndex:(long long)a0;
- (id)getSliceViewAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
