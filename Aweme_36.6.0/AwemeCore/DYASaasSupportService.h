@interface DYASaasSupportService : NSObject

+ (BOOL)isRestRequestUseSaas;
+ (void)handleResponse:(id)a0 error:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (BOOL)isThirdBindUseSaas;
+ (BOOL)isPhoneRequestUseSaas;
+ (BOOL)isOneKeyRequestUseSaas;
+ (BOOL)isSwitchAccountRequestUseSaaS;
+ (BOOL)isErrorCodeUseSaas;
+ (BOOL)isSwitchAccountRequestUseSaaSGet;
+ (BOOL)isSwitchAccountControlGroupToPost;
+ (BOOL)useSwitchAccountSaaSSDK;
+ (void)addUserToSaaS:(id)a0;
+ (void)deleteSaaSUserList:(id)a0;
+ (void)clearSaaSUser;

@end
