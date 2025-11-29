@class NLETrack_OC, AEKRenderGeometryImpl, AEKRenderTimeImpl, NSString, NLESegmentSticker_OC, NLETrackSlot_OC, AEKElementDiffableNode;
@protocol AEKBaseStickerData;

@interface AEKBaseStickerOperatorImpl : AEKBaseRenderEditor <AEKBaseStickerData, AEKBaseStickerOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLESegmentSticker_OC *segment;
@property (retain, nonatomic) AEKRenderGeometryImpl *geometryImpl;
@property (retain, nonatomic) AEKRenderTimeImpl *timeImpl;
@property (readonly, copy, nonatomic) NSString *stickerId;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) long long stickerType;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } stickerSize;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchor;
@property (readonly, nonatomic) BOOL mirrorX;
@property (readonly, nonatomic) BOOL mirrorY;
@property (readonly, nonatomic) long long layer;
@property (readonly, nonatomic) double rotationAngle;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) id<AEKBaseStickerData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)setMirrorX:(BOOL)a0;
- (id)setMirrorY:(BOOL)a0;
- (id)bringToFront;
- (id)setStickerBoxCacheWithCurrentSize:(struct CGSize { double x0; double x1; })a0;
- (id)diffChangesWithOrigin:(id)a0;
- (struct CGSize { double x0; double x1; })syncSizeWithStickerId:(long long)a0;
- (id)initWithTrack:(id)a0 slot:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setLayer:(long long)a0;
- (id)setAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)setEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)remove;
- (id)setScale:(double)a0;
- (id)setRotationAngle:(double)a0;
- (id)setAlpha:(double)a0;
- (id)toJsonString;

@end
