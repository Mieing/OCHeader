@interface PAGLayerImpl : NSObject {
    struct shared_ptr<pag::PAGLayer> { struct PAGLayer *__ptr_; struct __shared_weak_count *__cntrl_; } _pagLayer;
}

@property (nonatomic) struct shared_ptr<pag::PAGLayer> { struct PAGLayer *x0; struct __shared_weak_count *x1; } pagLayer;

+ (id)ToPAGLayer:(struct shared_ptr<pag::PAGLayer> { struct PAGLayer *x0; struct __shared_weak_count *x1; })a0;
+ (id)BatchConvertToPAGLayers:(const void *)a0;
+ (id)BatchConvertToPAGMarkers:(void *)a0;

- (id)initWithPagLayer:(struct shared_ptr<pag::PAGLayer> { struct PAGLayer *x0; struct __shared_weak_count *x1; })a0;
- (long long)layerType;
- (id)layerName;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)resetMatrix;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTotalMatrix;
- (BOOL)visible;
- (void)setVisible:(BOOL)a0;
- (long long)editableIndex;
- (id)parent;
- (id)markers;
- (long long)localTimeToGlobal:(long long)a0;
- (long long)globalToLocalTime:(long long)a0;
- (long long)duration;
- (float)frameRate;
- (long long)startTime;
- (void)setStartTime:(long long)a0;
- (long long)currentTime;
- (void)setCurrentTime:(long long)a0;
- (double)getProgress;
- (void)setProgress:(double)a0;
- (id)trackMatteLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBounds;
- (void)dealloc;
- (BOOL)excludedFromTimeline;
- (void)setExcludedFromTimeline:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
