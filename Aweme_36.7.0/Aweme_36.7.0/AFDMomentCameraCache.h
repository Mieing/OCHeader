@interface AFDMomentCameraCache : NSObject

+ (id)momentCameraFacingStatusByUID;
+ (void)setMomentCameraFacingStatusByUID:(id)a0;
+ (id)momentCameraRatioType;
+ (id)momentCameraScale;
+ (id)momentCameraBeautyStatus;
+ (void)setMomentCameraBeautyStatus:(id)a0;
+ (void)setMomentCameraRatioType:(id)a0;
+ (BOOL)momentCameraFilterGuideShown;
+ (void)setCachedMomentCameraFilterDict:(id)a0;
+ (id)cachedMomentCameraFilterDict;
+ (void)setRecentCameraPosition:(long long)a0;
+ (void)setMomentCameraEditLargeViewOrderByUID:(id)a0;
+ (void)setMomentCameraCurrectCaptureOrderByUID:(id)a0;
+ (id)momentCameraEditLargeViewOrderByUID;
+ (long long)recentCameraPosition;
+ (void)setHasPublishNotesMoment:(BOOL)a0;
+ (void)setMomentCameraScale:(id)a0;
+ (BOOL)hasPublishNotesMoment;
+ (void)setMomentCameraFacingStatus:(id)a0;
+ (id)momentCameraFacingStatus;
+ (id)momentCameraCurrectCaptureOrderByUID;
+ (long long)showExchangeBubbleCount;
+ (void)setShowExchangeBubbleCount:(long long)a0;

@end
