@class ACCRecordMode;

@interface ACCVideoQualityRecordSource : ACCVideoQualityBaseSource

@property (retain, nonatomic) ACCRecordMode *recordMode;

+ (BOOL)isMatchInContext:(id)a0;

- (struct CGSize { double x0; double x1; })inputFileResolution;
- (struct CGSize { double x0; double x1; })renderResolution;
- (id)sourceSetting;
- (id)localStrategiesClass;
- (struct CGSize { double x0; double x1; })compileFileResolution;
- (struct CGSize { double x0; double x1; })watermarkFileResolution;
- (void).cxx_destruct;
- (id)record;

@end
