@class NSString;

@interface ACCCameraSubServiceWrapperFactory : HTSService <ACCCameraSubServiceWrapperFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beautyWrapperWithCameraContext:(void *)a0 cameraProvider:(id)a1;
- (id)recorderWrapperWithCameraContext:(void *)a0 cameraProvider:(id)a1;
- (id)algorithmWrapperWithCameraContext:(void *)a0 cameraProvider:(id)a1;
- (id)cameraControlWrapperWithCameraContext:(void *)a0 cameraProvider:(id)a1;
- (id)multiCameraWrapperWithCameraContext:(void *)a0 cameraProvider:(id)a1;
- (id)cameraAudioControlWrapperWithCameraContext:(void *)a0 cameraProvider:(id)a1;

@end
