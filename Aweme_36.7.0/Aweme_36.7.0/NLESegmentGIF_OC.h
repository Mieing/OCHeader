@class NLEStyCanvas_OC, NLEResourceGIF_OC;

@interface NLESegmentGIF_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentGIF> { struct NLESegmentGIF *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceGIF_OC *gifResource;
@property (retain, nonatomic) NLEStyCanvas_OC *canvasStyle;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentGIF> { struct NLESegmentGIF *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
