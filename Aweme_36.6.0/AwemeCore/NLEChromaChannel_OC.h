@class NLESegmentChromaChannel_OC;

@interface NLEChromaChannel_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEChromaChannel> { struct NLEChromaChannel *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentChromaChannel_OC *segmentChromaChannel;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEChromaChannel> { struct NLEChromaChannel *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
