@class NLETrack_OC, NSString, NSArray, NLESegmentAudio_OC, NSDictionary, NLETrackSlot_OC, AEKAudioResource, AEKRenderTimeImpl;
@protocol AEKAudioClipData, AEKAudioClipExtraData;

@interface AEKAudioClipOperatorImpl : AEKBaseRenderEditor <AEKAudioClipData, AEKAudioClipOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLESegmentAudio_OC *segment;
@property (retain, nonatomic) AEKRenderTimeImpl *timeImpl;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) AEKAudioResource *resource;
@property (readonly, nonatomic) long long repeatCount;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } clipRange;
@property (readonly, nonatomic) double volume;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) BOOL keepTone;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fadeInDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fadeOutDuration;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *fileInfo;
@property (readonly, nonatomic) NSArray *keyframes;
@property (readonly, nonatomic) id<AEKAudioClipExtraData> extra;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) id<AEKAudioClipData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)setExtraDict:(id)a0;
- (id)extraOperator;
- (id)setClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)setKeepTone:(BOOL)a0;
- (id)addOrUpdateKeyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)addOrUpdateKeyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forceAdd:(BOOL)a2;
- (id)addKeyframe:(id)a0;
- (id)keyframeOperators;
- (id)keyframeWithAttachmentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)keyframeWithAttachmentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)clearAllKeyframe;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })measureRealDuration;
- (id)setFileInfo:(id)a0;
- (id)diffChangesWithOrigin:(id)a0;
- (unsigned long long)audioTypeFromNLEType:(unsigned long long)a0;
- (id)keyframeOperatorImpls;
- (id)initWithTrack:(id)a0 slot:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setRepeatCount:(long long)a0;
- (void).cxx_destruct;
- (id)setEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)remove;
- (id)setUserInfo:(id)a0;
- (id)enable:(BOOL)a0;
- (id)setVolume:(double)a0;
- (id)setFadeOutDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setFadeInDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setSpeed:(double)a0;
- (id)toJsonString;

@end
