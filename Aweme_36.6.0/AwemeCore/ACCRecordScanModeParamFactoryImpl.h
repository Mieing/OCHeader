@class VECaptureProcessParamImageDefinitionDetect, VECaptureProcessParamQrcodeDetect, VECaptureProcessParamEnigma, VECaptureProcessParamShakingDetect, NSString, VECaptureProcessParamScan;

@interface ACCRecordScanModeParamFactoryImpl : NSObject <ACCRecordScanModeParamFactory>

@property (copy, nonatomic) id /* block */ stableStatusCallback;
@property (readonly, nonatomic) VECaptureProcessParamShakingDetect *shakingDetectParam;
@property (readonly, nonatomic) VECaptureProcessParamImageDefinitionDetect *imageDefinitionDetectParam;
@property (readonly, nonatomic) VECaptureProcessParamEnigma *scanCameraQRCodeParam;
@property (readonly, nonatomic) VECaptureProcessParamScan *scanAnythingParam;
@property (readonly, nonatomic) VECaptureProcessParamQrcodeDetect *captureProcessParamQrcodeDetectParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)oberserStableStatus:(id /* block */)a0;
- (id)p_getCacheDictory:(id)a0;
- (void).cxx_destruct;

@end
