@interface AWEFriendsImpl.MomentOnboardingOptimizeManager : NSObject <AFDMomentOnboardingOptimizeManagerProtocol>

+ (id)mainTextFrom:(long long)a0;
+ (id)descriptionTextFrom:(long long)a0;
+ (BOOL)isOnboardingBlockFrom:(long long)a0;
+ (BOOL)isOnboardingBlockEnabledFrom:(long long)a0;
+ (long long)closeFriendsMinCountFromPublish:(BOOL)a0;
+ (void)updateConfirmButtonTextFrom:(long long)a0 confirmButton:(id)a1;

- (id)init;

@end
