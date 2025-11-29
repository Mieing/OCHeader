@class MTLRenderPassDescriptor, CAMetalLayer, TXCCameraFocusSquareView, TXCMetalDisplayConfig, NSString;
@protocol CAMetalDrawable, TXCMTKViewDelegate, MTLDevice;

@interface TXCMTKView : UIView <UIGestureRecognizerDelegate> {
    struct atomic<float> { struct __cxx_atomic_impl<float, std::__cxx_atomic_base_impl<float>> { _Atomic float __a_value; } __a_; } _scaleFactor;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _requestUpdateDrawableSize;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _viewSize;
    struct atomic<UIViewContentMode> { struct __cxx_atomic_impl<UIViewContentMode, std::__cxx_atomic_base_impl<UIViewContentMode>> { _Atomic long long __a_value; } __a_; } _atomicContentMode;
}

@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (retain, nonatomic) TXCCameraFocusSquareView *focusSquareView;
@property (weak, nonatomic) id<TXCMTKViewDelegate> delegate;
@property (retain, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<CAMetalDrawable> currentDrawable;
@property (readonly, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;
@property (nonatomic) struct CGSize { double width; double height; } inputFrameSize;
@property (retain, nonatomic) TXCMetalDisplayConfig *displayConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)commonInit;
- (void)updateViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })viewSizeInPixels;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setContentMode:(long long)a0;
- (void)setContentScaleFactor:(double)a0;
- (void)addTapGesture;
- (void)addPinchGesture;
- (void)handleTapGesture:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setupRenderPassDescriptorForTexture:(id)a0;
- (void)snapshot:(id)a0 complete:(id /* block */)a1;
- (BOOL)display;
- (void)showFocusViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
