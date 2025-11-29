@class NSString;

@interface ACCVideoQualityPipeline : NSObject <ACCVideoQualityLifeCycleObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useNewMudule:(id)a0;
+ (void)reportResolutionCheckAbsent:(id)a0;
+ (void)reportAbnormalResolution:(id)a0 extraContent:(id)a1 trackParams:(id)a2 error:(id)a3 needsQiaofu:(BOOL)a4;
+ (void)verifyVideoQualityWithContext:(id)a0 transcodeParams:(struct ACCVideoQualityTranscodeParams { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })a1;
+ (id)pipeline;

- (void)onPrepareSource:(id)a0;
- (void)onFinishSource:(id)a0;
- (void)onPrepareRender:(id)a0;
- (void)onFinishRender:(id)a0;
- (void)onPrepareCompile:(id)a0;
- (void)onFinishCompile:(id)a0 withError:(id)a1;
- (void)onPrepareSave:(id)a0;
- (void)onFinishSave:(id)a0;

@end
