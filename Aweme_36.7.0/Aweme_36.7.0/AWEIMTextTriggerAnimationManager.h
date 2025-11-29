@interface AWEIMTextTriggerAnimationManager : NSObject

+ (void)updateTextTriggerAnimationReource:(id)a0;
+ (void)batchDownloadTextTriggerResourcesIfNeededWithTriggerType:(id)a0;
+ (BOOL)shouldDownloadResource:(id)a0;
+ (void)p_traceDownloadResult:(id)a0 error:(id)a1 tracker:(id)a2;
+ (void)checkAccessExpireFile:(id)a0;
+ (id)textTriggerRootPath:(id)a0;
+ (void)updateTextTriggerReource:(id)a0 complete:(id /* block */)a1;
+ (void)p_updateTextTriggerAnimationReource:(id)a0;
+ (void)p_deleteTextTriggerAnimationReourceOptimizeIfNeed:(id)a0 complete:(id /* block */)a1;
+ (id)textTriggerTempPath;
+ (id)textTriggerTempPath:(id)a0;
+ (id)textTriggerPath:(id)a0 version:(long long)a1;
+ (id)textTriggerSubPath:(id)a0;

@end
