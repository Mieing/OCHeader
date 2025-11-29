@class NSNumber;

@interface RTVXREngineSettings : JSONModel

@property (retain, nonatomic) NSNumber *frontCameraMirrorEnable;
@property (retain, nonatomic) NSNumber *asyncDestoryEngineEnable;
@property (retain, nonatomic) NSNumber *engineRefactorEnable;
@property (retain, nonatomic) NSNumber *captureDevicesEnable;
@property (retain, nonatomic) NSNumber *interactDecoupleEnable;
@property (retain, nonatomic) NSNumber *forbidStartVideoCaptureBackground;
@property (retain, nonatomic) NSNumber *enableSelfRenderingVideoFrame;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;
+ (id)createSettingWithInjector:(id)a0;

- (void).cxx_destruct;

@end
