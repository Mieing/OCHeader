@class NSString;

@interface WKKryptonDefaultCameraDelegate : NSObject <WKKryptonCameraDelegate> {
    void *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraContext:(void *)a0;
- (void)cameraDidOutputPixelBuffer:(struct __CVBuffer { } *)a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
