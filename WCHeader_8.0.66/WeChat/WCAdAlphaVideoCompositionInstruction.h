@class NSArray, WCAdAlphaVideoProcessor, NSString;

@interface WCAdAlphaVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>

@property (nonatomic) int videoCompositeType;
@property (retain, nonatomic) WCAdAlphaVideoProcessor *alphaVideoProcessor;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (copy, nonatomic) NSArray *layerInstructions;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSourceTrackIDs:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 videoCompositeType:(int)a2;
- (struct __CVBuffer { } *)applyPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
