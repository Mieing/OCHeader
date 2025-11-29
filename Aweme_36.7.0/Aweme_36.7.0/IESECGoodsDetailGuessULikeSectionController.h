@class UIScrollView, IESECCollectionViewSectionWaterfallLayout, NSString;

@interface IESECGoodsDetailGuessULikeSectionController : IESECGoodsDetailBaseSectionController <IGListSupplementaryViewSource>

@property (retain, nonatomic) IESECCollectionViewSectionWaterfallLayout *sectionLayout;
@property (weak, nonatomic) UIScrollView *recommendScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
