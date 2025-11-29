@class NSString, NLEResourceNode_OC;

@interface NLESegmentMask_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentMask> { struct NLESegmentMask *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKMask;
@property (copy, nonatomic) NSString *maskType;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentMask> { struct NLESegmentMask *x0; struct __shared_weak_count *x1; })a0;
- (void)setRoundCorner:(float)a0;
- (float)roundCorner;
- (void)setFeather:(float)a0;
- (float)feather;
- (id)getResource;
- (void)setWidth:(float)a0;
- (void).cxx_destruct;
- (BOOL)invert;
- (void)setRotation:(float)a0;
- (id)init;
- (void)setHeight:(float)a0;
- (float)height;
- (float)width;
- (float)aspectRatio;
- (void)setAspectRatio:(float)a0;
- (float)rotation;
- (float)centerX;
- (float)centerY;
- (void)setCenterX:(float)a0;
- (void)setCenterY:(float)a0;
- (void)setInvert:(BOOL)a0;

@end
