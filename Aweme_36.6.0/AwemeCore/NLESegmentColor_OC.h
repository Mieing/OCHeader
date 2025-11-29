@interface NLESegmentColor_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentColor> { struct NLESegmentColor *x0; struct __shared_weak_count *x1; } cppValue;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentColor> { struct NLESegmentColor *x0; struct __shared_weak_count *x1; })a0;
- (void)setWidth:(unsigned long long)a0;
- (id)init;
- (void)setHeight:(unsigned long long)a0;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setColor:(unsigned long long)a0;
- (unsigned long long)color;

@end
