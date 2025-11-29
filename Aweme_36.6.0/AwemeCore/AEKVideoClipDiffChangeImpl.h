@class NSString, NSArray, NSURL, AEKVideoClipPreMVPDataImpl, AEKCanvasStyle;

@interface AEKVideoClipDiffChangeImpl : NSObject <AEKVideoClipDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) BOOL mirrorX;
@property (nonatomic) BOOL mirrorY;
@property (nonatomic) long long layer;
@property (nonatomic) double rotationAngle;
@property (retain, nonatomic) AEKCanvasStyle *canvasStyle;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } clipRange;
@property (nonatomic) struct AEKGeometryClipCorner { struct CGPoint { double x; double y; } leftTop; struct CGPoint { double x; double y; } rightTop; struct CGPoint { double x; double y; } leftBottom; struct CGPoint { double x; double y; } rightBottom; } clipCorner;
@property (nonatomic) double volume;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double speed;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL keepTone;
@property (nonatomic) BOOL rewind;
@property (nonatomic) unsigned long long livePhotoType;
@property (nonatomic) long long clipViewIndex;
@property (copy, nonatomic) NSString *livePhotoId;
@property (retain, nonatomic) AEKVideoClipPreMVPDataImpl *preMVP;
@property (copy, nonatomic) NSArray *endTransition;
@property (copy, nonatomic) NSArray *animation;
@property (copy, nonatomic) NSArray *keyframe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkCanvasStyleAvailable;
- (void)checkPreMVPAvailable;
- (void).cxx_destruct;

@end
