@class NSString;
@protocol WCOutChargeLogicDelegate;

@interface WCOutChargeLogic : NSObject <WCOutGetProductListExt, IAPExt>

@property (weak, nonatomic) id<WCOutChargeLogicDelegate> delegate;
@property (nonatomic) BOOL isAutoVerify;
@property (retain, nonatomic) NSString *autoVerifyBeginTs;
@property (retain, nonatomic) NSString *autoVerifyEndTs;
@property (nonatomic) unsigned int autoVerifyMode;
@property (nonatomic) unsigned int autoVerifyRet;
@property (nonatomic) unsigned int autoVerifyErrcode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logicWithAutoVerify;

- (void)getproductList:(id)a0 reqCurrency:(id)a1 responeDelegate:(id)a2;
- (void)didReceiveResponse:(BOOL)a0 Respone:(id)a1;
- (void)updateListFromAppleForSKProduct:(id)a0;
- (void)onGetProduct:(id)a0 invalidProductID:(id)a1;
- (long long)buyItem:(id)a0 extInfo:(id)a1;
- (void)onPurchaseSuccessForProduct:(id)a0 ErrCode:(unsigned int)a1;
- (void)onPurchaseFailForProduct:(id)a0 Err:(id)a1;
- (void)onPurchaseCancelForProduct:(id)a0;
- (void).cxx_destruct;

@end
