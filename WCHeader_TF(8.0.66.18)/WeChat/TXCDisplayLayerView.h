@class NSString, AVSampleBufferDisplayLayer;

@interface TXCDisplayLayerView : UIView {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _mainThreadTaskCount;
}

@property (retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) BOOL firstFrameRendered;
@property (copy) NSString *currentVideoGravity;
@property (nonatomic) double boundsOffset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)drawFrame:(struct __CVBuffer { } *)a0 rotation:(unsigned long long)a1;
- (void)fineTunningBounds;
- (void)applyDisplayTransform;
- (BOOL)waitMainThreadTaskFinishIfNeed;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })calculateRotationTransform;
- (void)drawToLayer:(struct __CVBuffer { } *)a0;
- (BOOL)supportGravity;
- (void)setVideoGravity:(id)a0;
- (void)flush;
- (void).cxx_destruct;

@end
