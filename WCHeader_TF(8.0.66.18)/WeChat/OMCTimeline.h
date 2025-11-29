@class OMJAspectRatio, NSString, OMCStoryline;

@interface OMCTimeline : NSObject {
    struct SharedPtr<XMSComposingSession> { struct XMSComposingSession *_ptr; } _composingSession;
}

@property (readonly, nonatomic) const void *backingTimeline;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoFrameDuration;
@property (readonly, nonatomic) double videoAspectRatio;
@property (readonly, nonatomic) OMJAspectRatio *aspectRatioDesc;
@property (readonly, nonatomic) double frameRateValue;
@property (readonly, nonatomic) unsigned long long frameRateType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pointSize;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } imageOriginDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minSegmentPreservedDuration;
@property (readonly, nonatomic) BOOL hasAnyMutation;
@property (readonly, nonatomic) OMCStoryline *storyline;
@property (readonly, nonatomic) NSString *decorPackageID;
@property (readonly, nonatomic) NSString *decorPackageDescFilePath;
@property (nonatomic) BOOL isOSTEnabled;
@property (nonatomic) BOOL isHDRRenderingEnabled;
@property (readonly, nonatomic) BOOL containsHDRVideoSegment;

- (id)initWithBackingComposingSession:(const void *)a0 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)segmentWithID:(id)a0;
- (id)segmentWithXID:(const void *)a0;
- (id)addPhotoVideoSegmentsWithAssetIDs:(id)a0 isAudioMuted:(BOOL)a1;
- (id)insertPhotoVideoSegmentsWithAssetIDs:(id)a0 isAudioMuted:(BOOL)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)anchorMovieTitleSegmentWithMaterialID:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 shouldUsePlaceholder:(BOOL)a3;
- (id)anchorContentDescSegmentWithMaterialID:(id)a0 belongingSegmentID:(id)a1 shouldUsePlaceholder:(BOOL)a2;
- (id)anchorFancyTextSegmentWithMaterialID:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 shouldUsePlaceholder:(BOOL)a3;
- (id)anchorFancyTextSegmentWithMaterialID:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 shouldUsePlaceholder:(BOOL)a3 shouldUseDefaultContent:(BOOL)a4;
- (id)anchorWhenWhereSegmentWithMaterialID:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 shouldUsePlaceholder:(BOOL)a3;
- (id)anchorEmoticonSegmentWithFilePath:(id)a0 decoderType:(unsigned long long)a1 timingFillMode:(unsigned long long)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)anchorMusicSegmentWithMusicInfo:(id)a0 musicFilePath:(id)a1 lyricStyleID:(id)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 isLooping:(BOOL)a5;
- (id)anchorNarrationSegmentWithFilePath:(id)a0 audioFileID:(id)a1 captionTexts:(id)a2 captionStyleID:(id)a3 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)anchorCaptionSegmentWithMaterialID:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 shouldUsePlaceholder:(BOOL)a3;
- (id)anchorVisualEffectSegmentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 normalizedContentSize:(struct CGSize { double x0; double x1; })a2 blurIntensity:(double)a3;
- (void)removeSegmentWithID:(id)a0;
- (id)splitSegmentWithID:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isAlignedToVideoFrameBoundary:(BOOL)a2;
- (void)moveStorySegmentWithID:(id)a0 beforeSegmentWithID:(id)a1;
- (void)moveAnchoredSegmentWithID:(id)a0 aboveSegmentWithID:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })alignTimeToVideoFrameBoundary:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })alignTimeToVideoFrameBoundaryForward:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)retrieveTimelineMutation;
- (void)updateAspectRatio:(id)a0;
- (void)removeUserInfoValueForKey:(id)a0;
- (void)setUserInfoValue:(id)a0 forKey:(id)a1;
- (id)userInfoValueForKey:(id)a0;
- (id)fetchAIGCMetadata;
- (id)toJSONString;
- (id)toBinaryBuffer;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
