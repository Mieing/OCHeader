@interface OMCDecibelHeightCalculator : NSObject {
    struct SharedPtr<XMFDecibelHeightCalcF32> { struct XMFDecibelHeightCalcF32 *_ptr; } _backingCalc;
}

- (id)initWithMaxHeight:(float)a0 minDecibel:(float)a1 powerRatio:(float)a2;
- (void)calculateHeightsWithDecibels:(const void *)a0 outputHeights:(void *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
