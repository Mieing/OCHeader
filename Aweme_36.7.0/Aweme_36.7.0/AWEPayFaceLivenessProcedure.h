@class NSString, AWEPayFaceLivenessPreviewUnit;

@interface AWEPayFaceLivenessProcedure : NSObject <BytedCertFaceVerifyProcedureDelegate>

@property (retain, nonatomic) AWEPayFaceLivenessPreviewUnit *previewUnit;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ faceDetectedBlock;
@property (copy, nonatomic) NSString *effectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)faceVC:(id)a0 endFaceVerifyWithError:(id)a1 result:(id)a2;
- (BOOL)faceVC:(id)a0 showCapturedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void).cxx_destruct;

@end
