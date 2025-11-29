@class NSString;

@interface BrandIAPMgr : MMUserService <PBMessageObserverDelegate, IAPExt, MMServiceProtocol> {
    BOOL _isPaying;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)brandIAPPreay:(id)a0;
- (int)brandIAPRequestProduct:(id)a0;
- (int)brandIAPPay:(id)a0 ExtInfo:(id)a1;
- (int)brandIAPGetResult:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGetProduct:(id)a0 invalidProductID:(id)a1;
- (void)onPurchaseSuccessForProduct:(id)a0 ErrCode:(unsigned int)a1;
- (void)onPurchaseCancelForProduct:(id)a0;
- (void)onPurchaseFailForProduct:(id)a0 Err:(id)a1;
- (void)dealloc;

@end
