@class XSampleBufferDisplayView, XImageViewRenderer, XImageMetalView;

@interface XImageView : UIView {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isMetalLayerActive;
}

@property (nonatomic) struct CGSize { double width; double height; } realSize;
@property (weak) XImageViewRenderer *renderer;
@property (retain, nonatomic) XSampleBufferDisplayView *sampleBufferDisplayView;
@property (retain, nonatomic) XImageMetalView *metalView;
@property (nonatomic) unsigned long long videoContentMode;
@property (nonatomic) BOOL disableOpaqueRender;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (BOOL)isSampleBufferDisplayViewAlive;
- (void)activeSampleBufferDisplayLayer;
- (void)activeMetalLayer;
- (id)metalLayer;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
