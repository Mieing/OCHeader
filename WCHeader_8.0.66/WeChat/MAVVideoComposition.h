@class TAVSourceExportSession, MAVEffectManager, NSMutableArray, MAVVLogDirectorMultiVideoCompositionEffect;

@interface MAVVideoComposition : NSObject <NSCopying>

@property (retain, nonatomic) TAVSourceExportSession *exportSession;
@property (retain, nonatomic) MAVVLogDirectorMultiVideoCompositionEffect *mixEffect;
@property (retain, nonatomic) MAVVideoComposition *selfPtr;
@property (retain, nonatomic) NSMutableArray *trackArray;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } sourceDuration;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playRange;
@property (nonatomic) float playFps;
@property (nonatomic) struct CGSize { double width; double height; } assetSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputCrop;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayScreenRect;
@property (nonatomic, getter=isEnableOriginSound) BOOL enableOriginAudio;
@property (nonatomic, getter=isRevert) BOOL revert;
@property (retain, nonatomic) MAVEffectManager *vLogEffectMgr;
@property (nonatomic, getter=isEnableFastCrop) BOOL enableFastCrop;
@property (nonatomic) BOOL enabledBGMCyclePlay;
@property (copy, nonatomic) id /* block */ renderCallback;

- (id)initWithTrackArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTrack:(id)a0;
- (void)updateTrack:(int)a0 track:(id)a1;
- (void)removeTrack:(id)a0;
- (void)assetSize:(struct CGSize { double x0; double x1; })a0;
- (id)createComposition:(id)a0;
- (id)buildTrackChannel:(id)a0;
- (id)buildSource;
- (id)buildSource:(BOOL)a0;
- (id)buildSource:(BOOL)a0 fps:(float)a1;
- (id)buildSimpleSource:(float)a0;
- (void)getThumbImage:(int)a0 callback:(id /* block */)a1;
- (BOOL)exportWithPath:(id)a0 config:(id)a1 callback:(id /* block */)a2 progressCallBlock:(id /* block */)a3;
- (void)pauseExporting;
- (void)continueExporting;
- (BOOL)cancelExport;
- (id)description;
- (void).cxx_destruct;

@end
