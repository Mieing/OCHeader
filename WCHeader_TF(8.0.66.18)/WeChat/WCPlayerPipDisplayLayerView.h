@class NSString, AVSampleBufferDisplayLayer;

@interface WCPlayerPipDisplayLayerView : UIView

@property (nonatomic) int rotationAngle;
@property BOOL waitingForMainThread;
@property (nonatomic) BOOL firstFrameRendered;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (copy, nonatomic) NSString *currentVideoGravity;
@property (nonatomic) double boundsOffset;
@property (nonatomic) long long lastPrintPtsSec;
@property (nonatomic) unsigned int taskId;
@property (retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getCurrentTime;
- (void)setRate:(double)a0;
- (void)seek:(double)a0;
- (void)renderedOneFrame:(id)a0;
- (void)renderedOneEmptyFrameWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)drawFrame:(id)a0;
- (void)fineTunningBounds;
- (void)applyDisplayTransform;
- (void)waitForMainThread;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })calculateRotationTransform;
- (struct __CVBuffer { } *)getPixelBufferFromTPFrame:(id)a0;
- (void)drawToLayer:(struct __CVBuffer { } *)a0;
- (void)setVideoGravity:(id)a0;
- (void)flush;
- (void).cxx_destruct;

@end
