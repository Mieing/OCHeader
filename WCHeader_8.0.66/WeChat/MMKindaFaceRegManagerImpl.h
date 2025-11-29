@class NSString, MMVoidCallback, MMVoidBoolStringI32StringCallback, FaceRecogPayHandler;

@interface MMKindaFaceRegManagerImpl : NSObject <FaceRecogPayHandlerDelegate, MMKindaFaceRegManager>

@property (retain, nonatomic) MMVoidBoolStringI32StringCallback *m_finishCallback;
@property (retain, nonatomic) MMVoidCallback *m_cancelCallback;
@property (retain, nonatomic) FaceRecogPayHandler *m_faceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFaceImpl:(int)a0 strPackage:(id)a1 strPackageSign:(id)a2 finishCallback:(id)a3 cancelCallback:(id)a4 otherVerifyTitle:(id)a5;
- (void)startFaceImpl:(int)a0 strPackage:(id)a1 strPackageSign:(id)a2 finishCallback:(id)a3 cancelCallback:(id)a4 otherVerifyTitle:(id)a5 faceVerifyTitle:(id)a6;
- (void)faceRecogPayHandlerDidFinish:(id)a0;
- (void)faceRecogPayHandlerDidCancel:(id)a0;
- (void).cxx_destruct;

@end
