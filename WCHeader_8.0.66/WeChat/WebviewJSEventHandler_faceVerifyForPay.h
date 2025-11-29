@class JSEvent, FaceRecogPayHandler, NSString;

@interface WebviewJSEventHandler_faceVerifyForPay : WebviewJSEventHandlerBase <FaceRecogPayHandlerDelegate>

@property (retain, nonatomic) JSEvent *cbEvent;
@property (retain, nonatomic) FaceRecogPayHandler *faceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
