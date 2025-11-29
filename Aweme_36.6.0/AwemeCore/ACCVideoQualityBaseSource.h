@class NSArray, ACCVideoQualityLifeCycleImpl, NSString, AWEVideoPublishViewModel;

@interface ACCVideoQualityBaseSource : NSObject <ACCVideoQualitySourceProtocol, ACCVideoQualityResultProtocol>

@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSArray *videoQualitySettings;
@property (retain, nonatomic) ACCVideoQualityLifeCycleImpl *lifeCycle;
@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } outputWriteFileResolution;
@property (copy, nonatomic) NSString *outputWriteFileBitrate;
@property (nonatomic) double outputWriteFileFps;
@property (nonatomic) struct CGSize { double width; double height; } outputCompileFileResolution;
@property (copy, nonatomic) NSString *outputCompileFileBitrate;
@property (nonatomic) double outputCompileFileFps;
@property (nonatomic) struct CGSize { double width; double height; } outputSaveFileResolution;
@property (copy, nonatomic) NSString *outputSaveFileBitrate;
@property (nonatomic) double outputSaveFileFps;

+ (BOOL)isMatchInContext:(id)a0;

- (id)inputFileBitrate;
- (struct CGSize { double x0; double x1; })inputFileResolution;
- (struct CGSize { double x0; double x1; })renderResolution;
- (double)inputFileFps;
- (id)sourceSetting;
- (id)strategySettingsWithName:(id)a0 stage:(id)a1 executeImmediately:(BOOL)a2;
- (double)renderFps;
- (id)localStrategiesClass;
- (struct CGSize { double x0; double x1; })inputPreviewResolution;
- (BOOL)isForceEncode;
- (struct CGSize { double x0; double x1; })compileFileResolution;
- (id)compileFileBitrate;
- (double)compileFileFps;
- (id)compileRemuxBitrateLimit;
- (struct CGSize { double x0; double x1; })compileRemuxLimitSize;
- (struct CGSize { double x0; double x1; })watermarkFileResolution;
- (id)watermarkFileBitrate;
- (double)watermarkFileFps;
- (id)sourceWithStrategyBlockList:(id)a0;
- (void)resetVideoQualitySettings;
- (struct CGSize { double x0; double x1; })defaultExportCanvasStateSize;
- (id)payload;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
