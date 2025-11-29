@class NSString;
@protocol AEKAudioAbility;

@interface AEKVideoAbilityImpl : AEKEditAbility <AEKVideoAbility>

@property (weak, nonatomic) id<AEKAudioAbility> audioAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })videoClipMinDuration;

- (id)videoClipWithClipId:(id)a0;
- (id)updateCanvasSourceWithVideoId:(id)a0 canvasSource:(id)a1;
- (id)updateCanvasSourceWithVideoClipId:(id)a0 canvasSource:(id)a1;
- (id)updateClipRangeWithVideoClip:(id)a0 clipRange:(id)a1;
- (id)splitVideoWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 clipId:(id)a1;
- (id)setVideoClipSpeedWithClipId:(id)a0 speed:(double)a1 keepTone:(BOOL)a2;
- (id)trimVideoClipWithClipId:(id)a0 clipStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)trimVideoClipWithClipId:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)deleteVideoClipWithClipId:(id)a0;
- (void)adjustVideoTransitionTimeWithVideoOperator:(id)a0;
- (void)adjustVideoAnimationTimeWithVideoClip:(id)a0;
- (id)updateCanvasSourceWithVideoClipOperator:(id)a0 canvasSource:(id)a1;
- (void).cxx_destruct;

@end
