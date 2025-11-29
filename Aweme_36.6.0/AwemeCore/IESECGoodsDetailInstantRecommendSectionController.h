@class IESECGoodsDetailSliceManager, IESECCollectionViewSectionWaterfallLayout, NSString;

@interface IESECGoodsDetailInstantRecommendSectionController : IESECGoodsDetailBaseSectionController <IESECGoodsDetailInstantRecommendDelegate>

@property (retain, nonatomic) IESECCollectionViewSectionWaterfallLayout *sectionLayout;
@property (retain, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (double)getSliceHeightAtIndex:(long long)a0;
- (id)getSliceViewAtIndex:(long long)a0;
- (void)instantRecommendDataUpdate:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
