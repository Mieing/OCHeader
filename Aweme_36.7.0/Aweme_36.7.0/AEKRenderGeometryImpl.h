@class NSString, NLEModel_OC, NLETrackSlot_OC;

@interface AEKRenderGeometryImpl : NSObject <AEKRenderGeometry, AEKRenderGeometryOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLEModel_OC *model;
@property (nonatomic) struct AEKGeometryAxis { struct CGPoint { double x; double y; } leftTop; struct CGPoint { double x; double y; } rightBottom; } targetAxis;
@property (nonatomic) struct AEKGeometryAxis { struct CGPoint { double x; double y; } leftTop; struct CGPoint { double x; double y; } rightBottom; } sourceAxis;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchor;
@property (readonly, nonatomic) BOOL mirrorX;
@property (readonly, nonatomic) BOOL mirrorY;
@property (readonly, nonatomic) long long layer;
@property (readonly, nonatomic) double rotationAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setMirrorX:(BOOL)a0;
- (id)setMirrorY:(BOOL)a0;
- (id)bringToFront;
- (id)initWithSlot:(id)a0 model:(id)a1 targetAxis:(struct AEKGeometryAxis { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a2 sourceAxis:(struct AEKGeometryAxis { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a3;
- (id)setLayer:(long long)a0;
- (id)setAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)setScale:(double)a0;
- (id)setRotationAngle:(double)a0;

@end
