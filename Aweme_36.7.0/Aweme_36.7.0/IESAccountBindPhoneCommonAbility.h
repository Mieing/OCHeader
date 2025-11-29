@class DUXLoadingToast;

@interface IESAccountBindPhoneCommonAbility : NSObject

@property (class, retain, nonatomic) DUXLoadingToast *loadingToast;

+ (id)commonParams;
+ (void)hideLoading;
+ (id)loadingToast;
+ (id)bindUrl;
+ (void)showDialogWithError:(id)a0 enterFrom:(id)a1 isRebind:(BOOL)a2;
+ (void)jumpToFEBindAndRebindPage:(BOOL)a0 enterFrom:(id)a1 phoneModel:(id)a2 maskMobileMatch:(BOOL)a3;
+ (void)getCarrierPhoneNumber:(id /* block */)a0;
+ (void)requestBindUpdateCheckStatusIsRebind:(BOOL)a0 maskMobile:(id)a1 complete:(id /* block */)a2;
+ (id)rebindUrl;
+ (id)carrierTypeString:(unsigned long long)a0;
+ (void)getCarrierPhoneToken:(id /* block */)a0;
+ (void)showLoading;

@end
