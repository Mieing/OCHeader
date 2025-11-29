@interface WAJSEventHandler_startLivenessDetection : WAJSEventHandler_baseFacialRecognition

- (BOOL)isLivenessDetectionOnly;
- (id)jsapiFuncName;
- (void)faceRecogDidFinishWithCode:(int)a0 msg:(id)a1 verifyResult:(id)a2;
- (BOOL)needConfirmView;

@end
