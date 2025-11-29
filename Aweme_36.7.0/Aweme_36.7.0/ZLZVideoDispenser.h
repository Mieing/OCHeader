@class NSString, NSMutableSet;

@interface ZLZVideoDispenser : NSObject <DTFCameraServiceDelegate>

@property (retain) NSMutableSet *receivers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addVideoReceiver:(id)a0;
- (void)removeVideoReceiver:(id)a0;
- (void)cameraControllerCaptureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
