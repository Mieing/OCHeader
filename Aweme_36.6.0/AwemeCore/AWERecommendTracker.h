@class NSString;

@interface AWERecommendTracker : HTSService <AWERecommendTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackWithContext:(id /* block */)a0;
+ (void)trackFollowCardWithContext:(id /* block */)a0;
+ (void)trackFollowCardWithUser:(id)a0 context:(id /* block */)a1;
+ (void)trackFollowCardWithAweme:(id)a0 context:(id /* block */)a1;
+ (void)trackFollowFromCardWithContext:(id /* block */)a0;
+ (void)trackFollowFromCardWithUser:(id)a0 context:(id /* block */)a1;
+ (void)trackFollowFromCardWithAweme:(id)a0 context:(id /* block */)a1;
+ (void)trackWithUser:(id)a0 context:(id /* block */)a1;
+ (id)p_followTrackCommonTrackInfo:(id)a0;
+ (void)trackWithRecommendContext:(id)a0;
+ (void)trackWithContext:(id)a0 params:(id)a1;
+ (void)recordRecommendImpressionWithContext:(id)a0;
+ (void)monitorUnfollowFamliarItemWithContext:(id)a0;


@end
