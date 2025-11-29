@interface NPRecommendServiceTracker : NSObject

+ (void)trackGainILAFeatureEventWithBusinessScene:(id)a0 requestFeatures:(id)a1 fromCache:(BOOL)a2 duration:(long long)a3 isVideo:(BOOL)a4 extra:(id)a5 error:(id)a6;
+ (void)trackVEFeatureExtractionWithEvent:(id)a0 isVideoMaterial:(BOOL)a1 duration:(long long)a2 frameCount:(long long)a3 businessScene:(id)a4 fromCache:(BOOL)a5 extra:(id)a6 error:(id)a7;

@end
