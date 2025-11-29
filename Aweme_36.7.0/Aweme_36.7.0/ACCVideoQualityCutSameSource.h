@interface ACCVideoQualityCutSameSource : ACCVideoQualityBaseSource

+ (BOOL)isMatchInContext:(id)a0;

- (struct CGSize { double x0; double x1; })inputFileResolution;
- (id)sourceSetting;
- (struct CGSize { double x0; double x1; })compileFileResolution;
- (struct CGSize { double x0; double x1; })watermarkFileResolution;

@end
