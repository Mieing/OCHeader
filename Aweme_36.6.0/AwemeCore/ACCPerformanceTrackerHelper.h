@interface ACCPerformanceTrackerHelper : NSObject

+ (void)trackForEffectDownload:(id)a0 duration:(double)a1 preload:(BOOL)a2 error:(id)a3 extraParams:(id)a4;
+ (void)trackForEffectDownload:(id)a0 duration:(double)a1 preload:(BOOL)a2 success:(BOOL)a3;
+ (void)trackForMultiPreload:(id)a0 duration:(double)a1 success:(BOOL)a2 extraParams:(id)a3;

@end
