@class NSRecursiveLock, AVSampleBufferDisplayLayer, UIView;

@interface WCVideoSampleBufferRender : WCVideoRender {
    struct __CVBuffer { } *_localImageBuffer;
}

@property (readonly, nonatomic) UIView *renderView;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *renderLayer;
@property (retain, nonatomic) NSRecursiveLock *localBufferLock;
@property BOOL isMirror;
@property (nonatomic) BOOL isRendered;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isMirror:(BOOL)a1;
- (id)getRenderView;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMirror:(BOOL)a0;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 FitView:(BOOL)a3;
- (void).cxx_destruct;

@end
