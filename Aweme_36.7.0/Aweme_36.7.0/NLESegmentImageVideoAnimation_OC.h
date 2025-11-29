@interface NLESegmentImageVideoAnimation_OC : NLESegmentVideoAnimation_OC {
    struct shared_ptr<cut::model::NLESegmentImageVideoAnimation> { struct NLESegmentImageVideoAnimation *__ptr_; struct __shared_weak_count *__cntrl_; } _cppImageVideoAnimation;
}

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentImageVideoAnimation> { struct NLESegmentImageVideoAnimation *x0; struct __shared_weak_count *x1; } cppValue;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentImageVideoAnimation> { struct NLESegmentImageVideoAnimation *x0; struct __shared_weak_count *x1; })a0;
- (double)beginScale;
- (void)setBeginScale:(double)a0;
- (double)endScale;
- (void)setEndScale:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
