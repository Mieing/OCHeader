@class UIImage, CADisplayLink;

@interface IESLiveInteractionDarkFrameStream : NSObject {
    struct __CVBuffer { } *_darkFrameBuffer;
}

@property (nonatomic) BOOL streamPushing;
@property (nonatomic) long long fps;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (copy, nonatomic) id /* block */ pushStreamCallback;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIImage *customImage;

- (void)p_releaseDarkFrameIfNeeded;
- (struct __CVBuffer { } *)p_makeDarkFrame;
- (void)p_pushDarkFrame;
- (id)initWithFPS:(long long)a0 outputSize:(struct CGSize { double x0; double x1; })a1;
- (void)startPushStream:(id /* block */)a0;
- (void)stopPushStream;
- (void).cxx_destruct;
- (void)dealloc;

@end
