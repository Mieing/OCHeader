@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CameraDeviceAppleDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate> {
    struct weak_ptr<liteav::video::CameraDeviceAppleCallback> { struct CameraDeviceAppleCallback *__ptr_; struct __shared_weak_count *__cntrl_; } callback_;
}

@property (copy, nonatomic) id /* block */ metaOutputHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *captureDelegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setCallback:(struct weak_ptr<liteav::video::CameraDeviceAppleCallback> { struct CameraDeviceAppleCallback *x0; struct __shared_weak_count *x1; })a0;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
