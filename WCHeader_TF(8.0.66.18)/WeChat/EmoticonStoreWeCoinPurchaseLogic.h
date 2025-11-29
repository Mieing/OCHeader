@class NSString, NSData;
@protocol EmoticonStoreWeCoinPurchaseLogicDelegate;

@interface EmoticonStoreWeCoinPurchaseLogic : EmoticonStoreBasePurchaseLogic <WCCoinConsumeLogicDelegate, StoreEmoticonWeCoinFirstPurchaseTipViewDelegate>

@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *purchaseBuff;
@property (weak, nonatomic) id<EmoticonStoreWeCoinPurchaseLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStoreItem:(id)a0;
- (void)initWeCoinSDK;
- (unsigned long long)startPurchase;
- (BOOL)showBuyTipIfNeeded;
- (void)realShowBuyTip;
- (void)createPreparePurchaseCgi;
- (void)startConsume;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (void)onCloseTip;
- (void).cxx_destruct;

@end
