@class IESMMCameraConfig, NSString;
@protocol IESServiceProvider, ACCCameraService;

@interface ACCCameraHotCutServiceImpl : NSObject <ACCCameraHotCutService>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) IESMMCameraConfig *mainTabConfig;
@property (retain, nonatomic) IESMMCameraConfig *momentSwitchConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCameraConfig;
- (void)bindServices:(id)a0;
- (BOOL)checkConfigNeedInterrupt;
- (void)resetCameraRecordConfigWithComplete:(id /* block */)a0;
- (void).cxx_destruct;

@end
