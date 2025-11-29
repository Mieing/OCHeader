@class NSString, IESECCollectionViewSectionLayout;

@interface IESECGoodsDetailRecommendSectionController : IESECGoodsDetailBaseSectionController <IGListSupplementaryViewSource, IESECLynxCollectionViewCellDelegate, IESECListCardsContextDelegate, IESECXBridgeCallHandlerService>

@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (id)currentListContextIdForCards;
- (id)currentBridgeCallHanderForCards;
- (id)currentListHomePageView;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)lynxCardMallReport:(id)a0;
- (void)mallWriteAlog:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (id)lynxCardMallGetReportInfo:(id)a0;
- (void)scrollToFirstFavoriteCellWithSectionID:(id)a0 animated:(BOOL)a1;
- (id)lynxCardFeedProductIds:(id)a0;
- (void)updateLynxExtraData:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (id)currentDataSource;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
