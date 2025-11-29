@interface AWEUserCommonAdapterDefault : NSObject

+ (BOOL)shouldShowDouyinEntrance;
+ (unsigned long long)verifyTypeForPlatform:(unsigned long long)a0 currentAccount:(id)a1 targetAccount:(id)a2 verifiedUids:(id)a3;

- (BOOL)shouldHideNavBar;
- (BOOL)banCountryCodeViewUserInteraction;
- (BOOL)shouldNotEnterCheckNonageVerify;

@end
