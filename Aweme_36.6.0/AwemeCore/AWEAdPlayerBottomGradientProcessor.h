@class NSString;

@interface AWEAdPlayerBottomGradientProcessor : NSObject <AWEAdPlayerBottomGradientProcessorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commerceModuleService;
+ (id)feedBottomGradientPortraitConfig;
+ (id)initializeProcessorConfigWithModel:(id)a0;
+ (BOOL)canColorDetectWithModel:(id)a0 config:(id)a1;
+ (void)trackStrategyWithModel:(id)a0 config:(id)a1;
+ (id)p_serverTitleInfoDictWithModel:(id)a0;
+ (id)p_staticDetectBottomColorWithVideoBrightness:(double)a0;
+ (id)p_estimatedWithBrightnessMean:(double)a0 brightnessStd:(double)a1;
+ (BOOL)p_needDowngradeByRefinementStrategy;
+ (long long)p_calculateSamplingIntervalWithBrightnessStd:(double)a0;
+ (id)p_dynamicDetectBottomColorWithConfig:(id)a0 playerController:(id)a1 currentIndex:(long long)a2;
+ (long long)p_calculateMinInterval;
+ (double)p_calculateAlphaWithBrightness:(double)a0;
+ (id)p_detectBottomColorWithConfig:(id)a0 playerController:(id)a1;
+ (double)p_calculateAlphaMinWithBrightness:(double)a0;
+ (double)p_calculateAlphaTargetWithBrightness:(double)a0;
+ (void)asyncInitializeProcessorConfigWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)setupDynamicDetectBottomColorWithModel:(id)a0 playerController:(id)a1 config:(id)a2 completion:(id /* block */)a3;
+ (void)setDynamicDetectStop:(BOOL)a0 config:(id)a1;
+ (id)processQueue;


@end
