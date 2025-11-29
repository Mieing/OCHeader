@class OMJID, NSString, OMCContentDescSegment;

@interface OMCElementSegment : OMCSegment <OMCTimeAdjustable, OMCSegmentCuttable, OMCCompoAnimAdjustable, OMCTextAnimAdjustable, OMCLayerSpatialAdjustable> {
    struct XTMTime { long long _periodCount; unsigned int _type; } _minElementSegmentPreservedDuration;
    struct XTMTime { long long _periodCount; unsigned int _type; } _imageOriginDuration;
}

@property (readonly, nonatomic) struct SharedPtr<XMSElementSegment> { struct XMSElementSegment *x0; } backingElementSegment;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } mainPartStartTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } mainPartDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mainPartTimeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } transInDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } transOutDuration;
@property (readonly, nonatomic) BOOL hasContentDescSegment;
@property (readonly, nonatomic) OMJID *contentDescSegmentID;
@property (readonly, nonatomic) OMCContentDescSegment *contentDescSegment;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } presentationTimeRange;
@property (readonly, nonatomic) BOOL isHeadExpandable;
@property (readonly, nonatomic) BOOL isTailExpandable;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } headExpandableDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } tailExpandableDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } totalDurationIncludingExpandable;
@property (readonly, nonatomic) BOOL isHeadCompressible;
@property (readonly, nonatomic) BOOL isTailCompressible;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } headCompressibleDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } tailCompressibleDuration;
@property (readonly, nonatomic) BOOL isHeadExpandableToOrigin;
@property (readonly, nonatomic) BOOL isTailExpandableToOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *animPresetID;
@property (readonly, nonatomic) BOOL isBuiltinAnimEnabled;
@property (readonly, nonatomic) BOOL isLayerSpatialAdjustable;
@property (nonatomic) struct CGPoint { double x0; double x1; } layerPosition;
@property (nonatomic) struct CGPoint { double x0; double x1; } layerNormalizedPosition;
@property (nonatomic) struct CGPoint { double x0; double x1; } layerScale;
@property (nonatomic) float layerRotation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } layerAnchorPoint;
@property (readonly, nonatomic) BOOL isLayerAnchorPointRelative;

- (id)initWithSegmentID:(id)a0 timeline:(id)a1;
- (void)setDurationByChangingStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setDurationByChangingEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)setStartTimeKeepingDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setRelativeLayerAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAbsoluteLayerAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isLayerSpatialAdjusted;
- (BOOL)isCuttableAtPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)expandHeadToOrigin;
- (void)expandTailToOrigin;
- (void)changeDurationByAdjustingHeadToPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)changeDurationByAdjustingTailToPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isHeadCompressibleToPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isTailCompressibleToPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isHeadAdjustableToPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isTailAdjustableToPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct XTMTime { long long x0; unsigned int x1; })minElementSegmentDuration;
- (void)clearCompoAnim;
- (void)enableBuiltinAnim;
- (void)disableBuiltinAnim;
- (id).cxx_construct;

@end
