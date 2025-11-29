@class NSString;

@interface SonicVeCameraCallbackImpl : NSObject <SonicVeCameraCallback> {
    struct weak_ptr<sonic::ve_camera::VeCameraStreamDarwin> { struct VeCameraStreamDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } weak_sonic_ve_camera_stream_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)VeCameraDidDispose:(unsigned int)a0;
- (void)VeCameraDidZoom:(unsigned int)a0;
- (id)initWithVeCameraStream:(struct shared_ptr<sonic::ve_camera::VeCameraStreamDarwin> { struct VeCameraStreamDarwin *x0; struct __shared_weak_count *x1; })a0;
- (void)VeCameraDidOutputSampleBuffer:(struct __CVBuffer { } *)a0 pageID:(unsigned int)a1;
- (void)VeCameraDidResume:(unsigned int)a0;
- (void)VeCameraDidPause:(unsigned int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
