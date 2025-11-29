@class NSString, MAVTrackTransition, TAVClip, NSNumber;

@interface MAVCompositionTrack : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceDuration;
@property (nonatomic) struct CGSize { double width; double height; } sourceSize;
@property (retain, nonatomic) TAVClip *internalClip;
@property (nonatomic) unsigned long long trackId;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } trackTimeRange;
@property (nonatomic) double playRate;
@property (nonatomic) double volume;
@property (nonatomic) NSNumber *rotate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackCropRect;
@property (retain, nonatomic) MAVTrackTransition *transition;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } transitionTimeRange;

+ (void)load;
+ (void)setFixesTransform:(BOOL)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })wcvm_adjustPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withNaturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)KEY_EXTRA_TRACK;
+ (void)makeChain:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })adjustPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withNaturalSize:(struct CGSize { double x0; double x1; })a1;

- (id)initVideoTrackWithAsset:(id)a0 path:(id)a1;
- (id)initWithPath:(id)a0 type:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)buildClip;
- (id)buildThumbSource;
- (id)getResource;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })trackStartTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })trackDuration;
- (BOOL)hasVideo;
- (BOOL)hasAudio;
- (id)buildVideoClip;
- (void)initVideoClipInfo:(id)a0 asset:(id)a1;
- (void)initImageClipInfo:(struct CGImage { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
