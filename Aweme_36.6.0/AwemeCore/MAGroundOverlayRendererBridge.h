@class MAGroundOverlay;

@interface MAGroundOverlayRendererBridge : MABaseRendererBridge {
    struct shared_ptr<lbs::adapter::ImageData> { struct ImageData *__ptr_; struct __shared_weak_count *__cntrl_; } _imageDataPtr;
    MAGroundOverlay *_groundOverlay;
}

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
