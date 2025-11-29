@interface AWENearbyRelationManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)increaseRelationCardShowedCount;
- (void)trackShowFreshFollowCardWithCandidateModel:(id)a0;
- (void)resetRelationCardShowedCount;
- (void)trackClickFreshFollowCardWithCandidateModel:(id)a0;
- (id)__relationCardShowedCountKey;
- (long long)__relationCardUnclickThreshold;
- (void)__trackFreshFollowCardWithCandidateModel:(id)a0 isClickEvent:(BOOL)a1;
- (BOOL)shouldShowRelationCard;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
