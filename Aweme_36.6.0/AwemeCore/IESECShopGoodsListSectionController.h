@class IESECShopMultiGoodsDiffableModel, NSArray, IESECCollectionViewSectionWaterfallLayout, NSString, IESECShopCommonGoodsListHandler, IESECStorePageContext;
@protocol IESECStoreContainerProtocol;

@interface IESECShopGoodsListSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol> {
    IESECShopMultiGoodsDiffableModel *_rawObject;
}

@property (retain, nonatomic) IESECCollectionViewSectionWaterfallLayout *sectionLayout;
@property (copy, nonatomic) NSArray *relationGoodsModels;
@property (retain, nonatomic) IESECShopCommonGoodsListHandler *listHandler;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (readonly, nonatomic) IESECShopMultiGoodsDiffableModel *rawObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)initWithPageContext:(id)a0 container:(id)a1;
- (long long)productTabStyle;
- (id)cellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (void)updateSectionLayoutIfNeeded;
- (long long)numberOfItems;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)actionHandler;
- (long long)scene;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
