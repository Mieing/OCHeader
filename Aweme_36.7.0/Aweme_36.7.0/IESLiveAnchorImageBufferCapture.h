@class UIImage, CADisplayLink, UIView;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveAnchorImageBufferCapture : NSObject

@property (nonatomic) BOOL isPushing;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) UIView *captureView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct __CVBuffer { } *preFrame;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessing;
@property (nonatomic) BOOL shouldReleasePreBuffer;
@property (copy, nonatomic) id /* block */ captureHandlerBlock;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)captureFrame:(id)a0;
- (void)startDisplayLink;
- (void)startPushImage;
- (void)stopPushImage;
- (id)initWithImage:(id)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopDisplayLink;

@end
