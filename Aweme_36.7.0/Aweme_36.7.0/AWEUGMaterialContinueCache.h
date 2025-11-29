@interface AWEUGMaterialContinueCache : NSObject

@property BOOL firstQuery;

+ (id)sharedManager;

- (BOOL)afterInstallFirstQuery;
- (void)privacyPolicyAgreed;
- (id)init;
- (void)dealloc;

@end
