@class NSString, AVSampleBufferDisplayLayer;

@interface TTSampleBufferDisplayLayerView : UIView <AVViewBackgroundProtocol> {
    struct Strong<com::ss::ttm::AVRender> { void /* function */ **_vptr$Strong; unsigned long long mBase; } _render;
    struct Mutex { struct { char opaque[64]; } mutex; } _mutex;
    BOOL _inActive;
}

@property (retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer;
@property (nonatomic) BOOL deallocFlush;
@property (nonatomic) BOOL enableReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRenderRotation:(int)a0;
- (void)avViewDidBecomeActive;
- (int)startWithRender:(void *)a0;
- (void)avViewDidEnterBackground:(BOOL)a0;
- (BOOL)isAvaild;
- (void)createLayer;
- (void).cxx_destruct;
- (void)stop;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
