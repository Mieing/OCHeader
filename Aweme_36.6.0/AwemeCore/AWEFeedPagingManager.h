@class NSString;

@interface AWEFeedPagingManager : NSObject <AWEFeedPagingManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (BOOL)ptPredictVelocityThresholdEnabled;
+ (BOOL)diffVelocityThresholdEnabled;
+ (BOOL)hookContentOffset;
+ (BOOL)enabledCurveFunctionOptimization;
+ (id)curveFunctionControlPoint;
+ (BOOL)ptPredictAnimationDurationEnabled;
+ (BOOL)ptPredictDistanceEnabled;
+ (BOOL)cellPreloadedAnimationDurationEnabled;
+ (BOOL)liveVelocityThresholdEnabled;
+ (BOOL)adVelocityThresholdEnabled;
+ (BOOL)nextAdVelocityThresholdEnabled;
+ (BOOL)normalVelocityThresholdEnabled;
+ (id)velocityThresholdConfig;
+ (BOOL)normalDistanceEnabled;
+ (BOOL)adDistanceEnabled;
+ (id)preSlideDistanceConfig;
+ (id)nextSlideDistanceConfig;
+ (id)durationOffsetConfig;
+ (id)curveFunctionConfig;
+ (id)pagingAnimationDurationOffsetConfig;
+ (id)pagingVelocityThresholdConfig;
+ (id)pagingDistanceConfig;
+ (BOOL)targetContentOffsetGetOpt;
+ (BOOL)ptPredictAdsAnimationDurationEnabled;
+ (id)config;
+ (unsigned long long)type;
+ (double)animationDuration;
+ (unsigned long long)curve;
+ (BOOL)enabled;


@end
