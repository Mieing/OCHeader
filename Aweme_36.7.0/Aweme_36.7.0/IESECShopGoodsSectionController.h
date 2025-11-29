@class NSString, IESECShopGoodsState, IESECCollectionViewSectionWaterfallLayout, IESECShopGoodsActionHandler, IESECObjectMapper, IESECShopContext;

@interface IESECShopGoodsSectionController : IESECShopGoodsListSectionController <IESECStoreNewFlexGoodsCellDelegate, IESECShopGoodsCardViewModelDelegate, IESECShopGoodsStateAttachable, IESECShopProductsDataSource> {
    IESECCollectionViewSectionWaterfallLayout *_sectionLayout;
    IESECShopGoodsActionHandler *_shopGoodsActionHandler;
}

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (retain, nonatomic) IESECObjectMapper *objectMapper;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *tabNameSecond;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *moduleForm;
@property (nonatomic) BOOL isRecommend;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bizTag;
- (void)clickSkuItem:(id)a0 skuIdx:(long long)a1;
- (void)attachState:(id)a0;
- (id)initWithPageContext:(id)a0 container:(id)a1;
- (long long)productTabStyle;
- (id)goodsCardViewModelWithGoodsModel:(id)a0;
- (id)cellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (id)oneColCellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (id)twoColCellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (id)cellWithClass:(Class)a0 index:(long long)a1 relationGoodsModel:(id)a2;
- (void)configureObjectMapper;
- (void)handleAddToCartButtonClick:(id)a0 cartButton:(id)a1;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)actionHandler;
- (id)init;
- (long long)scene;

@end
