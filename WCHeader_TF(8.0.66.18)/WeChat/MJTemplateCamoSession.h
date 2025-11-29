@class OMJCamoSession;

@interface MJTemplateCamoSession : MJTemplateSession

@property (retain, nonatomic) OMJCamoSession *camoSession;

- (BOOL)canBeginUseTemplate;
- (BOOL)createMaasSession;
- (BOOL)_createMaasCameraSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_tearDownCameraSessionWithCompletionHandler:(id /* block */)a0;
- (void)_destroyCameraSessionWithCompletionHandler:(id /* block */)a0;
- (void)_registerWeVisionModelInfo;
- (void)_enableBeautySkinSegFromXExpr;
- (void)_enableAlgoGenderNewStrategy;
- (void)_enableGanSmooth;
- (void)_enableGanMarker;
- (void)_setGanInferenceType;
- (void)_setFAMaxFrameSize;
- (void)_setBeatySeparatedOcc;
- (void)_enableBeautyScript;
- (void).cxx_destruct;

@end
