@class NLESegmentPreMVP_OC, NSString, NLETrackSlot_OC;
@protocol AEKVideoClipPreMVPData;

@interface AEKVideoClipPreMVPOperatorImpl : AEKBaseRenderEditor <AEKVideoClipPreMVPData, AEKVideoClipPreMVPOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLESegmentPreMVP_OC *preMVP;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorInCanvas;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) double widthHeightRatio;
@property (readonly, nonatomic) BOOL hasEdit;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKVideoClipPreMVPData> data;

- (id)setWidthHeightRatio:(double)a0;
- (id)setHasEdit:(BOOL)a0;
- (id)initWithSlot:(id)a0 preMVP:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setAnchorInCanvas:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)setRotation:(double)a0;
- (id)setScale:(double)a0;
- (id)toJsonString;

@end
