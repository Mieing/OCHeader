@class NSString, CADisplayLink, CALayer, UIView;

@interface HTSLiveLayerCapturer : NSObject <HTSLivePixelBufferCapturer>

@property (weak, nonatomic) CALayer *captureLayer;
@property (weak, nonatomic) UIView *captureView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ captureBlock;
@property (copy, nonatomic) id /* block */ liveCoreCaptureBlock;
@property (nonatomic) struct __CVBuffer { } *preFrame;
@property (nonatomic) BOOL onlyCapture;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0;
- (void)setVideoProcessedCallback:(id /* block */)a0;
- (void)destryDisplayLink;
- (void)captureFrame:(id)a0;
- (void)setPixelBufferProcessBlock:(id /* block */)a0;
- (void)captureFrame:(id)a0 useYUV:(BOOL)a1;
- (void)setPixelBufferProcessBlockWithoutRuning:(id /* block */)a0;
- (void)captureImmediately;
- (void)captureRGBImmediately;
- (BOOL)running;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)stopCapture;
- (void)setupDisplayLink;
- (void)dealloc;
- (void)startCapture;

@end
