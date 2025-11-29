@class JSEvent, FaceRecogInternelHandler, NSString;

@interface WebviewJSEventHandler_internelWxFaceVerify : WebviewJSEventHandlerBase <FaceRecogHandlerDelegate, FaceRecogBaseHandlerDelegate>

@property (retain, nonatomic) JSEvent *cbEvent;
@property (retain, nonatomic) FaceRecogInternelHandler *verifyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)didUploadFaceData:(id)a0;
- (void)faceRecogHandlerDidCancel:(id)a0;
- (void)faceRecogHandlerDidFinish:(id)a0;
- (void).cxx_destruct;

@end
