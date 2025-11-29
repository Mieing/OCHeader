@class NSString;
@protocol IESServiceProvider;

@interface ACCCameraKitPreloadTrackServiceImpls : NSObject <ACCCameraKitPreloadTrackService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL actuallyUseCameraPreload;
@property (nonatomic) BOOL shouldStartVideoCaptureWhenCameraCreated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraInstanceDidCreated:(id)a0 cameraSessionKey:(id)a1;
- (void)cameraInstanceWillCreatedFor:(id)a0;
- (void)bindServices:(id)a0;
- (void)trackInitCameraStart;
- (void)trackInitCameraFinished;
- (void).cxx_destruct;

@end
