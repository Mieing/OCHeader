@class NSString, IESECShopGoodsListFooterDiffableModel, IESECCollectionViewSectionLayout;

@interface IESECShopGoodsListFooterSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol> {
    IESECCollectionViewSectionLayout *_sectionLayout;
    IESECShopGoodsListFooterDiffableModel *_object;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)sectionLayout;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
