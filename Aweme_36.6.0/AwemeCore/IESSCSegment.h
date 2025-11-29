@class IESSCTransition, NSString, IESSCMedia, IESSCSimpleVolumeProcessingNode;
@protocol IESSCAudioTransition, IESSCAudioProcessingNode, IESSCVideoTransition, ISSCVideoTimeline;

@interface IESSCSegment : NSObject <IESSCContextRealTimeRenderInfoObserver, IESSCTransitionableVideo, IESSCTransitionableAudio, NSCopying, IESSCExportCancellable>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) IESSCSimpleVolumeProcessingNode *volumeProcessingNode;
@property (retain, nonatomic) IESSCMedia *media;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) id<ISSCVideoTimeline> videoFilter;
@property (nonatomic) float volume;
@property (retain, nonatomic) id<IESSCAudioProcessingNode> audioFilter;
@property (retain, nonatomic) IESSCTransition *transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESSCVideoTransition> videoTransition;
@property (readonly, nonatomic) id<IESSCAudioTransition> audioTransition;

- (void)applyEffectToBufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 renderInfo:(id)a1;
- (void)audioTapWillDealloc;
- (void)cancelSourceExport;
- (void)contextDidChangeRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithImage:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)applyEffectToSourceImage:(id)a0 renderInfo:(id)a1;
- (BOOL)shouldDiscardCurrentItem;
- (unsigned long long)numberOfAudioTracks;
- (unsigned long long)numberOfVideoTracks;
- (id)videoCompositionTrackForComposition:(id)a0 atIndex:(long long)a1;
- (id)sourceImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)colorSpaceInformation;
- (id)audioCompositionTrackForComposition:(id)a0 atIndex:(long long)a1;
- (void)configureWithAudioMixParameters:(id)a0;
- (id)initEmptyVideoWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithEmptyDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initEmptyAudioWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)makeFullRangeCopy;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;
- (BOOL)isHDRVideo;
- (id)initWithMedia:(id)a0;

@end
