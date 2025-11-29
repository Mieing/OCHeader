@class NSString, FaceRecogPayHandler;

@interface WAJSEventHandler_faceVerifyForPay : WAJSEventHandler_BaseEvent <FaceRecogPayHandlerDelegate>

@property (retain, nonatomic) FaceRecogPayHandler *faceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
