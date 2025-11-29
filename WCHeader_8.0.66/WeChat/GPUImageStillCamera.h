@class NSDictionary, AVCaptureStillImageOutput;

@interface GPUImageStillCamera : GPUImageVideoCamera {
    AVCaptureStillImageOutput *photoOutput;
    BOOL requiresFrontCameraTextureCacheCorruptionWorkaround;
}

@property double jpegCompressionQuality;
@property (readonly) NSDictionary *currentCaptureMetadata;

- (id)initWithSessionPreset:(id)a0 cameraPosition:(long long)a1 useCustomCaptureDevice:(BOOL)a2;
- (id)init;
- (id)initWithSessionPreset:(id)a0 cameraPosition:(long long)a1;
- (void)removeInputsAndOutputs;
- (void)capturePhotoAsSampleBufferWithCompletionHandler:(id /* block */)a0;
- (void)capturePhotoAsImageProcessedUpToFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)capturePhotoAsImageProcessedUpToFilter:(id)a0 withOrientation:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)capturePhotoAsJPEGProcessedUpToFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)capturePhotoAsJPEGProcessedUpToFilter:(id)a0 withOrientation:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)capturePhotoAsPNGProcessedUpToFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)capturePhotoAsPNGProcessedUpToFilter:(id)a0 withOrientation:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)capturePhotoProcessedUpToFilter:(id)a0 withImageOnGPUHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
