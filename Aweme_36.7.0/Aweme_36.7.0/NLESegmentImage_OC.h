@class NLEStyCanvas_OC, NLEStyCrop_OC, NLEResourceNode_OC;

@interface NLESegmentImage_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentImage> { struct NLESegmentImage *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEStyCrop_OC *crop;
@property (retain, nonatomic) NLEStyCanvas_OC *canvasStyle;
@property (retain, nonatomic) NLEResourceNode_OC *imageFile;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentImage> { struct NLESegmentImage *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (id)init;
- (float)alpha;
- (void)setAlpha:(float)a0;

@end
