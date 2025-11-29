@class NSString;

@interface AWEDYThirdPartyAppIdManagerCommonAdapter : NSObject <AWEDYThirdPartyAppIdManagerCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (void)setupThirdPartyAccount;
+ (void)registerSDKs;
+ (void)setupAccountsWithKeys:(id)a0;
+ (id)privateInstance;

- (void)accountPrivacyPolicyAgreeNoti:(id)a0;
- (id)weakTarget;

@end
