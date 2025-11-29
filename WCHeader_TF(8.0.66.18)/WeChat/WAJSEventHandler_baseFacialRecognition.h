@class NSString, FaceRecogPrivateVerifyHandler;

@interface WAJSEventHandler_baseFacialRecognition : WAJSEventHandler_BaseEvent <FaceRecogPrivateVerifyHandlerDelegate>

@property (retain, nonatomic) FaceRecogPrivateVerifyHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)faceRecogDidFinishWithCode:(int)a0 msg:(id)a1 verifyResult:(id)a2;
- (BOOL)needUploadVideo;
- (BOOL)useEncryptionVerify;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
- (BOOL)isLivenessDetectionOnly;
- (void).cxx_destruct;

@end
