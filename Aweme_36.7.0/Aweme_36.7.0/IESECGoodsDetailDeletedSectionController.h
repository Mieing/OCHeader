@class IESECCollectionViewSectionColumnLayout;

@interface IESECGoodsDetailDeletedSectionController : IESECGoodsDetailBaseSectionController

@property (retain, nonatomic) IESECCollectionViewSectionColumnLayout *sectionLayout;

- (id)cellForItemAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
