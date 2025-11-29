@class NSString;

@interface TXCLcoalRenderCallbackAdapter : NSObject <TXILocalVideoRendererDelegate> {
    struct weak_ptr<liteav::video::VideoRenderer::Client> { struct Client *__ptr_; struct __shared_weak_count *__cntrl_; } _client;
    void *_owner;
    struct CGSize { double width; double height; } _renderSize;
}

@property struct CGSize { double width; double height; } viewSizeInPixels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(struct shared_ptr<liteav::video::VideoRenderer::Client> { struct Client *x0; struct __shared_weak_count *x1; })a0 withOwner:(void *)a1;
- (void)videoRenderer:(id)a0 onSizeChange:(struct CGSize { double x0; double x1; })a1;
- (void)videoRenderer:(id)a0 onSizeInPixelsChange:(struct CGSize { double x0; double x1; })a1;
- (void)videoRenderer:(id)a0 onTouchPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)videoRenderer:(id)a0 onPinchScale:(double)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
