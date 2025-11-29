@class NSString;

@interface AWEVisionCameraModuleInterface : HTSService <AWEVisionCameraModuleInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getAWEVisionCameraViewControllerClass;
- (id)getAWEVisionCameraViewController;
- (Class)getAWEVisionHistoryManagerClass;

@end
