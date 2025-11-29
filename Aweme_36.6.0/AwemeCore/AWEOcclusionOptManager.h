@interface AWEOcclusionOptManager : NSObject

+ (unsigned long long)videoZoomTypeWithModel:(id)a0;
+ (BOOL)shouldHideBottomBarWithModel:(id)a0;
+ (BOOL)shouldOcclusionWithModel:(id)a0;
+ (id)galileoStrategyWithModel:(id)a0 handleType:(long long)a1;
+ (void)trackOcclusionOptStrategy:(id)a0;
+ (void)resetOcclusionOptStrategyBuryPoint:(id)a0;

@end
