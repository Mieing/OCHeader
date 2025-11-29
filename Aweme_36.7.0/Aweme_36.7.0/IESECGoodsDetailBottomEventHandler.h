@class NSDictionary, IESECGoodsDetailBottomMetaModel, NSString;
@protocol IESECPDPChunkService;

@interface IESECGoodsDetailBottomEventHandler : IESECGoodsDetailEventHandler <IESECReserveGoodsDidFinishMessage>

@property (retain, nonatomic) IESECGoodsDetailBottomMetaModel *bottomMeta;
@property (copy, nonatomic) NSDictionary *actionMetaDict;
@property (copy, nonatomic) NSDictionary *actionTrackMetaDict;
@property (weak, nonatomic) id<IESECPDPChunkService> chunkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventComponentID;

- (void)reserveGoods:(id)a0 finishedWithToastString:(id)a1 success:(BOOL)a2;
- (BOOL)serveGoodsFeedVC;
- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)trackClickProductWithDirectBuy:(BOOL)a0;
- (void)tapIM;
- (void)tapShopOrStore;
- (void)tapViewCart;
- (void)tapAddToCartAfterGuideWithoutSKU;
- (void)tapAddToCartWithoutSKU;
- (void)tapToOpenSKU;
- (void)tapToDirectBuy;
- (void)tapToAppoint;
- (void)tapToAppointDeposit;
- (void)tipViewJumpToAddressPage;
- (void)tapTpFindSame;
- (void)prerenderH5BuyNowContainer;
- (void)tapOpenSchema;
- (void)monitorEnterIMSuccessWithStart:(double)a0;
- (void)p_schemaReportWithJumpURLStr:(id)a0;
- (void)monitorEnterShopSuccessWithStart:(double)a0;
- (void)monitorEnterCartSuccessWithStart:(double)a0;
- (void)trackClickAddToCartIfOpenSKU:(BOOL)a0 params:(id)a1;
- (void)trackSendGiftButtonClick;
- (id)p_skuSchemaActionIsAddCart:(BOOL)a0;
- (id)p_skuMetaParamsWithAddCart:(BOOL)a0;
- (void)p_openSKUWithMetaParams:(id)a0;
- (void)tapToThirdPartyGoods;
- (void)monitorRateSuccessWithNextPage:(id)a0 start:(double)a1;
- (void)joinMember;
- (void).cxx_destruct;
- (id)init;
- (void)handleEvent;
- (void)dealloc;

@end
