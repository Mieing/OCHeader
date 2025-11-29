@interface ACCVideoQualityDynamicCanvasStrategy : ACCVideoQualityLazyLocalStrategy

+ (id)strategyName;

- (id)inputFileResolution;
- (id)renderResolution;
- (id)videoQualitySetting;
- (BOOL)isCanExecuteInStage:(id)a0;
- (id)compileFileResolution;
- (id)p_conditionalSource;

@end
