@interface DYACarrierService : NSObject

+ (id)appIdForCarrier:(long long)a0;
+ (void)registerCarrier;
+ (id)serviceOfCarrier:(long long)a0;
+ (id)trackerNameForCarrier:(long long)a0;
+ (double)requestSecurityPhoneNumberTimeoutWithCarrier:(long long)a0 scene:(long long)a1;
+ (id)noCarrierError;
+ (long long)availabeCarrierType;
+ (void)requestPhoneNumberOfCarrier:(long long)a0 enterMethod:(id)a1 scene:(long long)a2 completion:(id /* block */)a3;
+ (void)requestTokenDictOfCarrier:(long long)a0 completion:(id /* block */)a1;
+ (void)requestMobileAuthOfCarrier:(long long)a0 completion:(id /* block */)a1;
+ (id)errorHKMODisableCarrierAbility;
+ (id)sharedInstance;

@end
