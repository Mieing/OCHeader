@class NSDate, LSGLContext, LSGLScreenRender, LSGLPictureInput, UIView;

@interface LCInteractRender : NSObject {
    void *m_kvo_context;
}

@property (retain, nonatomic) LSGLContext *context;
@property (retain, nonatomic) LSGLPictureInput *gl_input;
@property (retain, nonatomic) LSGLScreenRender *gl_render_view;
@property (weak, nonatomic) UIView *renderSuperView;
@property (retain, nonatomic) NSDate *firstVideoFrameDate;
@property (nonatomic) BOOL firstVideoFrame;
@property (nonatomic) struct CGSize { double width; double height; } lastFrameSize;

- (void)handleFullLinkEnableDumpNotifications:(id)a0;
- (void)resetPreviewOn:(id)a0;
- (void)setupGLVideoPath;
- (id)initWithPixelFmt:(unsigned int)a0 purgeFBOnGLError:(BOOL)a1;
- (void)processVideoBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct __CVBuffer { } *)lastInputPixelBuffer;
- (id)getTextureLoader;
- (id)getRenderView;
- (void)interruptPipeline:(BOOL)a0;
- (void)removeFromSuperView;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)renderView;

@end
