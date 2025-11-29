@class NSString, UIViewController;
@protocol AWEVisionCameraViewControllerProtocol;

@interface ACCScanQRCodeJumpContext : NSObject <ACCScanQRCodeJumpContextProtocol, ACCScanQRCodeJumpContextStudioProxy>

@property (copy, nonatomic) id /* block */ jsbQRCodeResultCompletedHanlder;
@property (weak, nonatomic) UIViewController<AWEVisionCameraViewControllerProtocol> *visionCameraVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)qrCodeShortUrlJump:(id)a0 publishViewModel:(id)a1 trackDict:(id)a2;
+ (void)jumpQRcodeWithQRCodeResult:(id)a0 visionDataModel:(id)a1 viewController:(id)a2 trackParams:(id)a3;
+ (void)jsbQRCodeResultCallback:(id /* block */)a0;
+ (void)jumpCreationPathWithSchema:(id)a0;
+ (void)exitRecordPage:(id /* block */)a0;
+ (void)exitVisionCameraPage:(id)a0 completion:(id /* block */)a1;
+ (void)jumpQRcodeWithQRCodeResult:(id)a0 publishViewModel:(id)a1 tracks:(id)a2;
+ (void)sendScanResultCallback:(id)a0;
+ (void)jumpCreationPathWithSchema:(id)a0 viewController:(id)a1;
+ (void)sendMessageToJsbQRcodeWhenCloseRecordPage:(BOOL)a0;
+ (id)defaultManager;

- (void)exitVisionCameraPageNoCompletion;
- (void).cxx_destruct;

@end
