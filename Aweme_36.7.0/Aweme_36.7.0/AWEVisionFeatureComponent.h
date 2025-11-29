@class NSString, AWEVisionCameraViewController;
@protocol AWEVisionCameraGlobalDataModelStudioProxy;

@interface AWEVisionFeatureComponent : NSObject <AWEVisionComponentProtocol>

@property (weak, nonatomic) AWEVisionCameraViewController *myVisionCameraVC;
@property (retain, nonatomic) id<AWEVisionCameraGlobalDataModelStudioProxy> globalDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentDidLoad;
- (void)switchModeViewWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void).cxx_destruct;

@end
