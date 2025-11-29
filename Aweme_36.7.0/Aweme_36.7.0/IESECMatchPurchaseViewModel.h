@class IESECMatchPurchaseRequest, NSArray, NSString, IESECMatchPurchaseGoodsBuyView;
@protocol IESECMatchPurchaseViewModelProtocol;

@interface IESECMatchPurchaseViewModel : NSObject <IESECMatchPurchaseGoodsBuyViewDelegate>

@property (nonatomic) long long selectIndex;
@property (weak, nonatomic) IESECMatchPurchaseGoodsBuyView *buyView;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) IESECMatchPurchaseRequest *request;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) BOOL dynamicSucess;
@property (weak, nonatomic) id<IESECMatchPurchaseViewModelProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)matchPurchaseGoodsBuyViewTipShow:(id)a0;
- (void)matchPurchaseGoodsBuyView:(id)a0 didChangeAllItems:(BOOL)a1;
- (void)matchPurchaseGoodsBuyViewDidClickBuyButton:(id)a0;
- (void)matchPurchaseGoodsBuyView:(id)a0 didChangeSKUWithGoodsItem:(id)a1;
- (void)matchPurchaseGoodsBuyView:(id)a0 didClickedGoodsWithGoodsItem:(id)a1 clickView:(id)a2;
- (void)matchPurchaseGoodsBuyView:(id)a0 productWillShowWithModel:(id)a1;
- (void)matchPurchaseGoodsBuyView:(id)a0 didSelectGoodsWithGoodsItem:(id)a1;
- (void)fetchMatchPurchaseDataWithCombinationIDs:(id)a0 andExtraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)refreshBuyButtonWithcompletionBlock:(id /* block */)a0;
- (void)updateSkuWithSkuInfo:(id)a0;
- (id)p_requestBasicParams:(id)a0;
- (void)fetchMatchPurchaseSubmitOrderInfoWithCombinationID:(id)a0 selectedSKUList:(id)a1 andExtraParams:(id)a2 completionBlock:(id /* block */)a3;
- (void)matchPurchaseGoodsBuyView:(id)a0 didDeSelectSKUWithGoodsItem:(id)a1;
- (void).cxx_destruct;
- (id)currentModel;

@end
