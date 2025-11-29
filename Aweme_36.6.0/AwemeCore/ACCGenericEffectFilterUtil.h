@interface ACCGenericEffectFilterUtil : NSObject

+ (BOOL)isInvalidGenericTemplateModel:(id)a0;
+ (BOOL)isInvalidGenericTemplateModel:(id)a0 isRealLivePhoto:(BOOL)a1;
+ (void)resetForceFilterIDs;
+ (BOOL)isOnlyStaticPhotoUseOrHasAIGCWithTemplate:(id)a0;
+ (void)updateFilterIDsWithRepository:(id)a0;
+ (BOOL)isInvalidEffectModel:(id)a0;
+ (BOOL)isInvalidEffectModelForRealLivePhoto:(id)a0;
+ (BOOL)isAIGCTemplateNotForTransition:(id)a0;
+ (double)singleVideoOrLivePhotoVideoDurationWithRepository:(id)a0;
+ (BOOL)isSlotDurationExceedVideoDuration:(double)a0 templateModel:(id)a1;

@end
