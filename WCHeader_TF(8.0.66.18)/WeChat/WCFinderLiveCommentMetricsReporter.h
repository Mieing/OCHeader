@interface WCFinderLiveCommentMetricsReporter : NSObject

+ (BOOL)isCommentMetricsEnabledForLiveTaskId:(id)a0;
+ (void)reportCommentMetricsForCalcCellFramesWithLiveTaskId:(id)a0 loopMetrics:(id)a1 commentTableVM:(id)a2;
+ (void)reportCommentMetricsForCalcCellFramesWithLiveTask:(id)a0 loopMetrics:(id)a1 commentTableVM:(id)a2;

@end
