@class NSArray, NSString;

@interface AEKTextStickerDiffChangeImpl : NSObject <AEKTextStickerDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) BOOL mirrorX;
@property (nonatomic) BOOL mirrorY;
@property (nonatomic) long long layer;
@property (nonatomic) double rotationAngle;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSArray *clipChanges;
@property (copy, nonatomic) NSString *ttsAudioUUID;
@property (copy, nonatomic) NSString *socialExtraInfosString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
