@class MTLRenderPassDescriptor, NSString, CAMetalLayer, NSCondition;

@interface TTMetalViewNew : UIView <AVViewBackgroundProtocol, TTMetalViewProtocol, AVVideoProcessorMetalViewInterface> {
    struct Box<com::ss::ttm::AVRender> { struct AVRender *mValue; struct Mutex { struct { char opaque[64]; } mutex; } mMutex; } _renderBox;
    struct Mutex { struct { char opaque[64]; } mutex; } _mutex;
    int _maxTexSize;
    BOOL _inActive;
    BOOL _dynTexSize;
    BOOL _renderPausedInActive;
    BOOL _inBackgroundKeepRuning;
    CAMetalLayer *_metalLayer;
    struct __CFString { } *_colorSpace;
    struct __CFString { } *_colorTrans;
    NSCondition *_colorspaceSetCondition;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    BOOL _renderPassClearColorOpaque;
    BOOL _currentOpaque;
}

@property (nonatomic) BOOL renderPaused;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL enableColorSpaceSetWait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)renderLoop;
- (void)avViewDidBecomeActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dynTexSize:(BOOL)a1;
- (BOOL)maxSizeFilter:(struct CGSize { double x0; double x1; } *)a0;
- (void)_checkAndUpdateColorSpaceTransFuncEDRMeataDataWait:(struct __CVBuffer { } *)a0;
- (void)_checkAndUpdateColorSpaceTransFuncEDRMeataData:(struct __CVBuffer { } *)a0;
- (int)startWithRender:(void *)a0;
- (void)avViewDidEnterBackground:(BOOL)a0;
- (BOOL)isAvaild;
- (unsigned long long)getPixelFmt;
- (void)setMetalViewOpaque:(BOOL)a0;
- (void)checkAndUpdateColorSpaceTransFuncEDRMeataData:(struct __CVBuffer { } *)a0;
- (void)setMTLPixelFormatForMetalLayer:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })getDrawableSize;
- (BOOL)renderPausedInActive;
- (void)initCommon;
- (void).cxx_destruct;
- (id)currentRenderPassDescriptor;
- (void)stop;
- (void)draw;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setDrawableSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaximumDrawableCount:(int)a0;
- (id)device;
- (void)layoutSubviews;
- (id)nextDrawable;
- (void)didMoveToWindow;
- (id)currentDrawable;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)a0;
- (void)setColorPrimaries:(int)a0;

@end
