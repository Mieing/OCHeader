@class TAVResource, NSString, NSDictionary, TAVVideoConfiguration, TAVAudioConfiguration, TAVTransition;
@protocol TAVAudioTransition, TAVVideoTransition;

@interface TAVClip : NSObject <TAVTransitionableVideo, TAVTransitionableAudio, NSCopying>

@property (retain, nonatomic) NSDictionary *userData;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TAVResource *resource;
@property (retain, nonatomic) TAVVideoConfiguration *videoConfiguration;
@property (retain, nonatomic) TAVAudioConfiguration *audioConfiguration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (retain, nonatomic) TAVTransition *transition;
@property (readonly, nonatomic) id<TAVVideoTransition> videoTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TAVAudioTransition> audioTransition;

- (id)initWithAsset:(id)a0;
- (id)initWithImage:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithEmptyDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initEmptyVideoWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initEmptyAudioWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)makeFullRangeCopy;
- (id)init;
- (id)initWithResource:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)numberOfVideoTracks;
- (id)videoCompositionTrackForComposition:(id)a0 atIndex:(long long)a1;
- (id)sourceImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)applyEffectToSourceImage:(id)a0 renderInfo:(id)a1;
- (unsigned long long)numberOfAudioTracks;
- (id)audioCompositionTrackForComposition:(id)a0 atIndex:(long long)a1;
- (void)configureWithAudioMixParameters:(id)a0;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 renderInfo:(id)a1;
- (BOOL)shouldDiscardCurrentItem;
- (void).cxx_destruct;

@end
