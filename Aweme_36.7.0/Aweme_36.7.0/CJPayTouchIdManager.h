@class CJPayTouchIDEvaluatePolicyData, UIWindow;

@interface CJPayTouchIdManager : NSObject

@property (retain, nonatomic) CJPayTouchIDEvaluatePolicyData *evaluatePolicyData;
@property (nonatomic) BOOL isEvaluateDataValid;
@property (nonatomic) unsigned long long currentSupportBiopaymentType;
@property (retain, nonatomic) UIWindow *transparentWindow;

+ (long long)originBiometryType;
+ (id)currentOriTouchIdData;
+ (BOOL)isErrorBiometryLockout;
+ (BOOL)isBiometryNotAvailable;
+ (BOOL)isTouchIDNotEnrolled;
+ (void)showTouchIdWithLocalizedReason:(id)a0 cancelTitle:(id)a1 falldBackTitle:(id)a2 fallBackBlock:(id /* block */)a3 resultBlock:(id /* block */)a4;
+ (void)unlockTouchIdWithLocalizedReason:(id)a0 resultBlock:(id /* block */)a1;
+ (id)currentBioType;
+ (id)p_sharedInstance;
+ (unsigned long long)currentSupportBiopaymentType;
+ (void)showTouchIdWithLocalizedReason:(id)a0 falldBackTitle:(id)a1 fallBackBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
+ (BOOL)touchIdInfoDidChange;
+ (id)p_evaluatePolicyData;
+ (unsigned long long)p_getPaymentTypeAfterIOS11WithError:(id)a0 ctx:(id)a1;
+ (unsigned long long)p_getPaymentTypeBeforeIOS11WithError:(id)a0 ctx:(id)a1;
+ (BOOL)p_isIphoneXR;
+ (id)p_currentIdentityTouchIdData;
+ (id)currentTouchIdDataIdentity;
+ (id)p_accountForKeychainWithIdentify;
+ (unsigned long long)p_getSupportPaymentTypeWithError:(id)a0 ctx:(id)a1;
+ (void)setCurrentTouchIdDataIdentity:(id)a0;
+ (id)currentTouchIdDataForCompare;
+ (void)preLoad;

- (id)p_theEvaluatePolicyData;
- (void)p_addTransparentWindow;
- (void)p_hiddenTransparentWindow;
- (void)p_setEvaluatePolicyDataStateWithEerror:(id)a0;
- (unsigned long long)p_bioPaymentTypeWithContext:(id)a0 canEvaluatePolicy:(BOOL)a1 error:(id)a2;
- (void)p_handleTransparentWindowTap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
