@class NSMutableDictionary, NSString, FaceRecogPrivateVerifyHandler, JSEvent;

@interface WebviewJSEventHandler_requestWxFacePictureVerifyUnionVideo : WebviewJSEventHandlerBase <FaceRecogPrivateVerifyHandlerDelegate> {
    FaceRecogPrivateVerifyHandler *_handler;
}

@property (retain, nonatomic) JSEvent *cbEvent;
@property (retain, nonatomic) NSMutableDictionary *errorMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
