@class NSString, IESECCollectionViewSectionColumnLayout, IESECShopGoodsState, IESECLynxCardModel, NSMutableSet;

@interface IESECShopGoodsLynxSectionController : IGListSectionController <IESECListCardsContextDelegate, IESECLynxCollectionViewCellDelegate, IESECShopGoodsStateAttachable, IESECCollectionViewSectionLayoutProtocol> {
    IESECShopGoodsState *_state;
    IESECCollectionViewSectionColumnLayout *_layout;
    IESECLynxCardModel *_model;
    NSMutableSet *_jsBridges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void)didUpdateToObject:(id)a0;
- (id)sectionLayout;
- (void)attachState:(id)a0;
- (void)p_extraOperation:(id)a0;
- (id)makeLynxCardModel:(id)a0;
- (id)p_getTemplateUrl:(id)a0;
- (id)p_getLynxData:(id)a0;
- (id)makeLynxGlobalProps;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
