@class NLEResourceNode_OC;

@interface NLESegmentChromaChannel_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentChromaChannel> { struct NLESegmentChromaChannel *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKChroma;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentChromaChannel> { struct NLESegmentChromaChannel *x0; struct __shared_weak_count *x1; })a0;
- (id)getResource;
- (void).cxx_destruct;
- (id)init;
- (float)intensity;
- (float)shadow;
- (void)setColor:(unsigned int)a0;
- (unsigned int)color;
- (void)setShadow:(float)a0;
- (void)setIntensity:(float)a0;

@end
