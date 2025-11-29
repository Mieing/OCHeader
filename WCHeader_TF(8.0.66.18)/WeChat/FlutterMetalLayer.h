@class CADisplayLink, NSMutableSet, FlutterTexture, NSObject;
@protocol OS_dispatch_source, MTLDevice;

@interface FlutterMetalLayer : CALayer <GPUTextureReleaseMetalLayer> {
    struct CGSize { double width; double height; } _drawableSize;
    unsigned long long _nextDrawableId;
    NSMutableSet *_availableTextures;
    unsigned long long _totalTextures;
    FlutterTexture *_front;
    CADisplayLink *_displayLink;
    unsigned long long _displayLinkPauseCountdown;
    BOOL _didSetContentsDuringThisDisplayLinkPeriod;
    BOOL _displayLinkForcedMaxRate;
    unsigned long long _maxIOSurfaceSize;
    struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long __value_; } __pair3_; } __tree_; } _recycledTexture;
}

@property (retain) id<MTLDevice> device;
@property (readonly) id<MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property BOOL framebufferOnly;
@property struct CGSize { double x0; double x1; } drawableSize;
@property BOOL presentsWithTransaction;
@property struct CGColorSpace { } *colorspace;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double lastFinishPresentedTime;

+ (BOOL)enabled;

- (id)init;
- (void)dealloc;
- (void)setMaxRefreshRate:(double)a0 forceMax:(BOOL)a1;
- (void)onDisplayLink:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)updateMaxIOSurfaceSize:(unsigned long long)a0;
- (void)didEnterBackground:(id)a0;
- (id)createIOSurface;
- (id)nextTexture;
- (void)startTimer;
- (void)stopTimer;
- (id)tryNextTexture;
- (id)nextDrawable;
- (void)presentOnMainThread:(id)a0;
- (void)presentTexture:(id)a0;
- (void)getTexture:(id)a0;
- (void)returnTexture:(id)a0;
- (void)didChangedQosLevel;
- (struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x0; } x2; } x0; })getRecycledTexture;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
