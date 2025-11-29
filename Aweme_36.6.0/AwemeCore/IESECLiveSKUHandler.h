@class NSMutableDictionary, IESECLiveContext, NSString, IESECLiveEditCartHandler;

@interface IESECLiveSKUHandler : NSObject <IESECLiveSKUViewDelegate>

@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveEditCartHandler *editCartHandler;
@property (retain, nonatomic) NSMutableDictionary *skuItemDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createSKUInfoWithLiveContext:(id)a0 goodsModel:(id)a1 sourceBTMToken:(id)a2 wholeSize:(struct CGSize { double x0; double x1; })a3 ecomEntranceForm:(id)a4 skuFrom:(id)a5 liveListChannel:(id)a6 panelHeightPercent:(id)a7 maskBgColor:(id)a8 containerView:(id)a9;

- (id)sourceVC;
- (id)businessContext;
- (id)coreParams;
- (id)jumpHandler;
- (id)panelEnvironment;
- (id)initWithLiveContext:(id)a0 editCartHandler:(id)a1;
- (void)enterSKUWithGoodsModel:(id)a0 skuCreateInfo:(id)a1 addCartInfo:(id)a2;
- (void)enterSKUWithGoodsModel:(id)a0 skuCreateInfo:(id)a1 addCartInfo:(id)a2 action:(id)a3;
- (void)appendParamsToUltimateOrderAndSaveSKU:(id)a0 goodsModel:(id)a1 skuCreateInfo:(id)a2;
- (BOOL)existEnteredSKU:(long long)a0;
- (void)closeSKUIfNeeded:(long long)a0;
- (id)enteredSKUWithFromType:(long long)a0;
- (void)subscribeEvent;
- (void)saveSKUItem:(id)a0 key:(long long)a1;
- (id)finalSchemaWithGoodsModel:(id)a0 skuCreateInfo:(id)a1 addCartInfo:(id)a2 originSchema:(id)a3 skuSessionID:(id)a4;
- (id)skuItemWithEnterFromType:(long long)a0;
- (void)closeSKU:(long long)a0 withCompletion:(id /* block */)a1;
- (id)passThroughTrackClientDic:(id)a0 skuCreateInfo:(id)a1;
- (void)clearSKUItemWithEnterFromType:(long long)a0;
- (id)passThroughApiAddExtraDic:(id)a0 addCartInfo:(id)a1;
- (id)matchedSKUItemFromEventParams:(id)a0;
- (void)clearSKUItemWithSKUSessionID:(id)a0;
- (void)operateSKUView:(id)a0 addToCartWithGoodsModel:(id)a1 extraInfo:(id)a2;
- (id)tracker;
- (void).cxx_destruct;

@end
