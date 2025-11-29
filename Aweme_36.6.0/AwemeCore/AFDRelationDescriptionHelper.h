@class NSString;

@interface AFDRelationDescriptionHelper : NSObject <AFDRelationDescriptionHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconNameWithType:(long long)a0;
+ (BOOL)shouldUsePrivacyDescription:(id)a0;
+ (id)privacyDescription:(id)a0;
+ (BOOL)shouldUseFriendDescription:(id)a0;
+ (id)friendDescription;
+ (BOOL)shouldUseRecommendReasonAsDescription:(id)a0 isHighValueRecommend:(BOOL)a1 previousRecommendReason:(id)a2;
+ (id)recommendDescription:(id)a0;
+ (BOOL)shouldUseFanDescription:(id)a0;
+ (id)fanDescription;
+ (id)recommendReasonFromServer:(id)a0;
+ (BOOL)isServerProvidedUncategorizedRelationReason:(id)a0;
+ (void)trackRecommendReasonIfNeededWithUser:(id)a0;
+ (id)processedDescriptionForPrivacy:(id)a0 User:(id)a1;
+ (long long)relationDescriptionIconType:(id)a0;
+ (BOOL)canHidePost:(id)a0;
+ (BOOL)canShowMoreMenueWithUser:(id)a0;
+ (id)privacyMapContext:(id)a0;
+ (id)relationDescriptionIconColorWithType:(long long)a0;
+ (id)relationDescriptionTextSet;
+ (id)relationDescriptionTextWithUser:(id)a0 isHighValueRecommend:(BOOL)a1 previousRecommendReason:(id)a2 needTrack:(BOOL)a3;
+ (id)relationDescriptionAttachmentIconWithUser:(id)a0;
+ (id)relationDescriptionIconColor:(id)a0;
+ (id)iconFromServer:(id)a0;
+ (id)relationDescriptionIconColorFromServer:(id)a0;
+ (BOOL)shouldShowRelationDescriptionLabel:(id)a0;
+ (id)iconWithType:(long long)a0;


@end
