@class NSArray, NSString;

@interface AEKAudioDiffChangeImpl : NSObject <AEKAudioClipDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long repeatCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } clipRange;
@property (nonatomic) double volume;
@property (nonatomic) double speed;
@property (nonatomic) BOOL keepTone;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fadeInDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fadeOutDuration;
@property (copy, nonatomic) NSArray *keyframe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
