@interface OVCCombinedCurveTimingFunc : NSObject {
    struct SharedPtr<XMFCombinedCurveTimingFunc> { struct XMFCombinedCurveTimingFunc *_ptr; } _backingTimingFunc;
}

- (id)initWithSourceDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 targetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 controlPoints:(id)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reverseMapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
