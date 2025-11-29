@class NSString, CAEAGLLayer, UIView, NSMutableArray;
@protocol SonicViewPaintListener;

@interface SonicView : NSObject {
    struct Mutex<sonic::graphics::PlatformView *> { struct PlatformView *val_; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } platform_view_;
    float scale_;
    struct Mutex<id<SonicViewPaintListener>> { id<SonicViewPaintListener> val_; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } paint_listener_;
    unsigned long long frame_count_;
    NSMutableArray *cbs_;
}

@property (readonly, nonatomic) CAEAGLLayer *layer;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *unique_id;

- (BOOL)dispatchTouch:(long long)a0 touches:(id)a1 withEvent:(id)a2;
- (void *)getPlatformView;
- (void)removePlatformView;
- (void)onContentDrawing;
- (void)bindPlatformView:(void *)a0;
- (void)addTouchCallback:(id)a0 selector:(SEL)a1;
- (void)removeTouchCallback:(id)a0;
- (void)sendResize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needGestureProcessor:(BOOL)a1;
- (void)sendTouchWithType:(unsigned char)a0 touches:(id)a1 current:(unsigned long long)a2;
- (struct __CVBuffer { } *)createPixelBufferRef;
- (void)setPaintListener:(id)a0;
- (void)setOnFrameDelegate:(id)a0;
- (void)setCastScreenPreferredFramePerSecond:(unsigned int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
