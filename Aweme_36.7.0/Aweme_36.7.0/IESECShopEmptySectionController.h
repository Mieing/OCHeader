@class IESECShopStateDiffableModel, NSString, IESECCollectionViewSectionLayout;

@interface IESECShopEmptySectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol>

@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;
@property (retain, nonatomic) IESECShopStateDiffableModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
