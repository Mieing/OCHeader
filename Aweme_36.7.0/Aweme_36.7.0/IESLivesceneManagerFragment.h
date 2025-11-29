@class IESLivePrefSampleSceneModule, NSString;

@interface IESLivesceneManagerFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLivePrefSampleSceneModule *prefSampleSceneModule;
@property (copy) NSString *machineId;
@property (copy) NSString *machineType;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)networkNotification:(id)a0;
- (void)setUp;
- (void).cxx_destruct;

@end
