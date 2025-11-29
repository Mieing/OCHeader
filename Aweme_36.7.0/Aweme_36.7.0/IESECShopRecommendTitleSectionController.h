@class NSString, IESECShopRecommendTitleObject, IESECCollectionViewSectionLayout;

@interface IESECShopRecommendTitleSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol> {
    IESECShopRecommendTitleObject *_object;
}

@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;
@property (nonatomic) double layoutHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)showTrack;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
