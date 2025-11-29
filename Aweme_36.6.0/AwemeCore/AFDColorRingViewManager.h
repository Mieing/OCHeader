@class NSMutableDictionary, AFDColorRingOnboardingAnimationShowRuleManager;

@interface AFDColorRingViewManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *displayConfigCache;
@property (retain, nonatomic) AFDColorRingOnboardingAnimationShowRuleManager *onboardingAnimationShowRuleManager;

+ (id)sharedManager;

- (id)getColorRingReadModelForConfig:(id)a0;
- (long long)getColorRingStatusWithReadModel:(id)a0 scene:(id)a1;
- (id)getFirstStoryWithReadModel:(id)a0;
- (id)getDisplayConfigWithColorStatus:(long long)a0 scene:(id)a1;
- (BOOL)shouldShowOnboardingAnimationForConfig:(id)a0;
- (void)recordShowCountForOnboardingAnimationWithConfig:(id)a0;
- (void)recordClickCountForOnboardingAnimationWithConfig:(id)a0;
- (double)getRingAvatarRatio;
- (double)getRingAvatarOffsetForProfile;
- (id)getColorRingReadModelForConfig:(id)a0 mustUseUID:(BOOL)a1;
- (long long)getDataStatusForConfig:(id)a0;
- (id)getDisplayConfigWithDataStatus:(long long)a0 scene:(id)a1;
- (long long)getColorRingStatusWithDataStatus:(long long)a0 scene:(id)a1;
- (long long)getDataStatusForConfig:(id)a0 mustUseUID:(BOOL)a1;
- (long long)getColorRingStatusForConfig:(id)a0 mustUseUID:(BOOL)a1;
- (id)getDisplayConfigForConfig:(id)a0;
- (long long)getColorRingStatusForConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
