@class TAVPixelBufferCache, NSArray, CIColor, TAVRenderReportData, NSString;
@protocol TAVVideoComposition, TAVVideoCompositionMixer;

@interface TAVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>

@property (retain, nonatomic) TAVPixelBufferCache *pixelBufferCache;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL enablePostProcessing;
@property (nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (copy, nonatomic) NSArray *transitionableChannel;
@property (copy, nonatomic) NSArray *layerInstructions;
@property (retain, nonatomic) id<TAVVideoComposition> videoComposition;
@property (retain, nonatomic) id<TAVVideoCompositionMixer> videoCompositionMixer;
@property (retain, nonatomic) CIColor *backgroundColor;
@property (nonatomic) BOOL cacheDecodedFrameAsEmptyFrame;
@property (retain, nonatomic) TAVRenderReportData *renderReportData;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPassthroughTrackID:(int)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithSourceTrackIDs:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)commonInit;
- (id)applyRequest:(id)a0;
- (void)applyRequest:(id)a0 directedToPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)applyDefaultMixerWithRequest:(id)a0 backgroundImage:(id)a1;
- (id)applyTransitionForImage:(id)a0 withRequest:(id)a1 layerInstruction1:(id)a2 layerInstruction2:(id)a3;
- (id)applyCustomMixerWithRequest:(id)a0 backgroundImage:(id)a1;
- (id)imageFromLayerInstruction:(id)a0 request:(id)a1;
- (struct __CVBuffer { } *)pixelBufferFromLayerInstruction:(id)a0 request:(id)a1;
- (id)generateImageFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pixelAspectRatioTransformFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (float)factorForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (struct __CVBuffer { } *)handleCacheForPixelBuffer:(struct __CVBuffer { } *)a0 trackID:(long long)a1;
- (void).cxx_destruct;

@end
