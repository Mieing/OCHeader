@class MMLayer;

@interface MMLayerCompositer : NSObject {
    struct shared_ptr<WeVisionUtil::LayerCompositer> { struct LayerCompositer *__ptr_; struct __shared_weak_count *__cntrl_; } _nativeCompositer;
    MMLayer *_canvas;
}

@property (nonatomic) struct CGSize { double width; double height; } canvasSize;

- (id)init;
- (id)canvas;
- (id)createSubLayer;
- (void)renderToTexture:(unsigned int)a0;
- (void)renderToCurrentFrameBuffer;
- (void)setBackgroundColorWithR:(float)a0 G:(float)a1 B:(float)a2 A:(float)a3;
- (void)setBackgroundImage:(unsigned int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
