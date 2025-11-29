@interface ACCVideoQualityImportSource : ACCVideoQualityBaseSource

+ (BOOL)isMatchInContext:(id)a0;

- (struct CGSize { double x0; double x1; })inputFileResolution;
- (struct CGSize { double x0; double x1; })renderResolution;
- (double)inputFileFps;
- (id)sourceSetting;
- (double)renderFps;
- (id)localStrategiesClass;
- (struct CGSize { double x0; double x1; })inputPreviewResolution;
- (struct CGSize { double x0; double x1; })compileFileResolution;
- (struct CGSize { double x0; double x1; })compileRemuxLimitSize;
- (struct CGSize { double x0; double x1; })watermarkFileResolution;
- (double)outputCompileFileFps;

@end
