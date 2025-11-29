@class NSString;

@interface AWEUserDouyinRouter : HTSService <AWEUserRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resetPassword:(id)a0;
+ (id)combineLoginViewControllerIsHalfScreen:(BOOL)a0;
+ (id)carrierLoginViewController:(id)a0 isHalfScreen:(BOOL)a1;
+ (id)businessAccountProtocol;
+ (id)SMSLoginV2Step1ViewController;
+ (id)SMSLoginV2Step2ViewController:(id)a0 phoneNumber:(id)a1 isFromMaskLogin:(BOOL)a2;
+ (id)SMSLoginHalfViewController;
+ (id)pushLoginViewController:(id)a0 lastLoginUser:(id)a1;
+ (id)pushLoginViewController:(unsigned long long)a0 lastLoginUserModel:(id)a1;
+ (id)multiLoginViewController:(id)a0;
+ (id)secondAccountUnbindViewController:(id)a0;
+ (id)phoneBindViewController:(id)a0;
+ (id)phoneBindViewController:(id)a0 completionBlock:(id /* block */)a1;
+ (id)quickBindViewController:(id)a0;
+ (id)phoneCountryCodeViewController:(id /* block */)a0;
+ (id)phoneCountryCodeViewControllerWithOrderedTopRegions:(id)a0 topRegionsMap:(id)a1 completion:(id /* block */)a2;
+ (id)findPasswordViewController:(id)a0;
+ (id)profileEditViewController:(id)a0;
+ (id)untrustDeviceVerifyViewController:(id)a0 phoneNumber:(id)a1;
+ (id)quickBindViewController:(id)a0 cancelBlock:(id /* block */)a1 finishBlock:(id /* block */)a2;
+ (id)phoneBindViewController:(id)a0 cancelBlock:(id /* block */)a1 finishBlock:(id /* block */)a2;
+ (id)upsmsLoginViewController:(id)a0 smsContent:(id)a1 targetPhoneNumber:(id)a2 verifyTicket:(id)a3;
+ (id)recommendViewController:(id)a0;
+ (id)initializePassword:(id)a0;
+ (id)resetPasswordFillCode:(id)a0 context:(id)a1;
+ (id)bindFillInPhoneNumber;
+ (id)bindFillInPhoneNumber:(BOOL)a0;
+ (id)bindFillInCode:(id)a0;
+ (id)rebindFillInOldPhoneNumber:(id)a0;
+ (id)rebindFillInOldCode:(id)a0;
+ (id)rebindFillInNewPhoneNumber:(id)a0;
+ (id)rebindFillInNewCode:(id)a0;
+ (id)safeRebind:(id)a0;
+ (id)rebindHighRiskFillInOldPhoneNumber:(id)a0;
+ (id)rebindHighRiskFillInNewPhoneNumber:(id)a0;
+ (id)rebindHighRiskFillInNewCode:(id)a0;
+ (id)rebindNotChineseMainLandFillInOldPhoneNumber:(id)a0;
+ (id)reBindNotChineseMainLandFillInOldCode:(id)a0;
+ (Class)aAWEUserModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (BOOL)isPad;

- (id)aAWEUserModuleServiceDOUYINSSAdapter;
- (id)aAWEUserModuleServiceDOUYINAdapter;

@end
