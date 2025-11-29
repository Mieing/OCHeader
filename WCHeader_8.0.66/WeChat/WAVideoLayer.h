@class NSMutableArray, CADisplayLink;

@interface WAVideoLayer : CALayer

@property (retain, nonatomic) NSMutableArray *floatList;
@property (nonatomic) long long visibleBegin;
@property (nonatomic) long long visibleCount;
@property (nonatomic) double rowCount;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double currentTime;
@property (nonatomic) double initFloatTime;
@property (nonatomic) BOOL playing;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void)enableFloat:(BOOL)a0;
- (void)initFloat:(id)a0;
- (void)addFloat:(id)a0 color:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)updateVideoTime:(double)a0;
- (void)forceUpdate;
- (void)onUpdateFloat;
- (void)clearFloat;
- (void).cxx_destruct;

@end
