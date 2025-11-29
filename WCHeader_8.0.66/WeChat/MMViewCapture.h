@class UIView, NSObject, CADisplayLink;
@protocol OS_dispatch_queue, MMViewCaptureDelegate;

@interface MMViewCapture : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id<MMViewCaptureDelegate> delegate;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) BOOL alignsImageSize;
@property (readonly, nonatomic) BOOL isCapturing;

- (id)init;
- (id)initWithView:(id)a0;
- (void)startCapturing;
- (void)stopCapturing;
- (void)pauseCapturing;
- (void)resumeCapturing;
- (void)captureByDisplayLink:(id)a0;
- (void).cxx_destruct;

@end
