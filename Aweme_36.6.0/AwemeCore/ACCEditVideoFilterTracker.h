@interface ACCEditVideoFilterTracker : NSObject

+ (void)trackPanGestureWithErrorCode:(long long)a0 errorMessage:(id)a1;
+ (void)trackUndownloadedEffectWithEffectId:(id)a0;
+ (void)monitorEffectListWithPanelName:(id)a0 statusCode:(long long)a1 error:(id)a2 startTime:(double)a3 needUpdate:(BOOL)a4;
+ (void)monitorFilterPlatformDownloadErrorWithPanelName:(id)a0 statusCode:(long long)a1 error:(id)a2 ipString:(id)a3 startTime:(double)a4 info:(id)a5;

@end
