@class NSString;

@interface AEKBaseStickerDiffChangeImpl : NSObject <AEKBaseStickerDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) BOOL mirrorX;
@property (nonatomic) BOOL mirrorY;
@property (nonatomic) long long layer;
@property (nonatomic) double rotationAngle;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
