@interface ACCEditBeautyPerformanceTrackerUntil : NSObject

+ (void)trackEffectRenderWithStartTime:(double)a0 endTime:(double)a1 publishViewModel:(id)a2 eventType:(unsigned long long)a3 itemType:(unsigned long long)a4 interactionType:(unsigned long long)a5;
+ (void)trackLokieResourceDownloadDurationWithStartTime:(double)a0 endTime:(double)a1 publishViewModel:(id)a2 eventType:(unsigned long long)a3 useCacheStatus:(BOOL)a4 itemId:(id)a5 itemName:(id)a6 errorMsg:(id)a7;
+ (void)trackLokieTreeResourceDownloadDurationWithStartTime:(double)a0 endTime:(double)a1 publishViewModel:(id)a2 eventType:(unsigned long long)a3 useCacheStatus:(BOOL)a4 errorMsg:(id)a5;
+ (void)trackEffectRenderWithStartTime:(double)a0 endTime:(double)a1 publishViewModel:(id)a2 eventType:(unsigned long long)a3 interactionType:(unsigned long long)a4;
+ (void)trackDetectFaceWithStartTime:(double)a0 endTime:(double)a1 publishViewModel:(id)a2 eventType:(unsigned long long)a3;

@end
