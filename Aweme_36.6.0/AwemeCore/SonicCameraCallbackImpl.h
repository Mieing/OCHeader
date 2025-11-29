@class NSString;

@interface SonicCameraCallbackImpl : NSObject <SonicCameraCallback> {
    void *sonic_camera_stream_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraDidPause:(unsigned int)a0;
- (void)cameraDidResume:(unsigned int)a0;
- (void)cameraDidDispose:(unsigned int)a0;
- (void)cameraDidZoom:(unsigned int)a0;
- (void)cameraDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pageID:(unsigned int)a1;
- (id)initWithCameraStream:(void *)a0;

@end
