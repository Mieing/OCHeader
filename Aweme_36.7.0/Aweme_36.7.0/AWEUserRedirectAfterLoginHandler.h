@interface AWEUserRedirectAfterLoginHandler : NSObject

+ (void)redirectAfterLoginIfNeed:(id)a0;
+ (BOOL)canRedirectToSafetyPage;
+ (void)redirectToLifeAccountBindPage;
+ (BOOL)canRedirectToSafetyPageURL:(id)a0 userContext:(id)a1;
+ (void)recordRedirectToSafetyPage;
+ (BOOL)hitSafetyPageWhitelist:(id)a0;
+ (BOOL)isReachSafetyPageMaxCountLimit;
+ (id)safetyPageFreqStorageKey;

@end
