@class NSString;

@interface CJPayFaceRecogCameraAuthManager : NSObject <CJPayCameraAuthProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)cameraAuthStatus;
+ (void)checkAndRequestCameraAuthorizationWithCompletion:(id /* block */)a0;
+ (void)p_showAlertWithCompletion:(id /* block */)a0;


@end
