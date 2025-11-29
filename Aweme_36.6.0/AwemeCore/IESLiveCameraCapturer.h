@class NSString;
@protocol IESLiveRecoder;

@interface IESLiveCameraCapturer : NSObject <HTSLivePixelBufferCapturer>

@property (weak, nonatomic) id<IESLiveRecoder> camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVideoProcessedCallback:(id /* block */)a0;
- (void)setPixelBufferProcessBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopCapture;
- (void)startCapture;
- (id)initWithCamera:(id)a0;

@end
