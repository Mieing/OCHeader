@interface AWEFeedContinuePlayHelper : NSObject

+ (BOOL)shouldContinuouslyPlay:(id)a0 withSeekToTime:(double)a1;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)shouldOptimizeContinuePlayWithModel:(id)a0 seekTime:(double)a1;
+ (double)seekTimeLimitedVal;
+ (double)defaultSeekTimeInRevisitVideoWithModel:(id)a0 referString:(id)a1;
+ (double)defaultSeekTimeInJXRevisitVideoWithModel:(id)a0;
+ (double)defaultSeekTimeInWatchVideoLaterWithModel:(id)a0 referString:(id)a1;
+ (double)defaultSeekTimeInReCreateVideoWithModel:(id)a0;
+ (double)defaultSeekToTimeIfNeededWithModel:(id)a0;
+ (double)defaultContinuePlayTimeWithModel:(id)a0 referString:(id)a1;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;

@end
