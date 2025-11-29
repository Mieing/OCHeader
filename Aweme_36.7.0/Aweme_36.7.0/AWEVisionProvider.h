@class NSString, UIViewController;
@protocol AWEVisionCameraViewControllerProtocol;

@interface AWEVisionProvider : NSObject <AWEVisionProviderStudioProxy>

@property (weak, nonatomic) UIViewController<AWEVisionCameraViewControllerProtocol> *lastCameraViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getScanPictureGraphConfigJson;
+ (id)getScanCameraGraphConfigJsonNeedDetect:(BOOL)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
