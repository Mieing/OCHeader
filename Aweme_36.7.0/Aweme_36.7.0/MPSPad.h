@class MPSNNPad;
@protocol MTLComputePipelineState, MTLBuffer;

@interface MPSPad : MPSCNNKernel {
    id<MTLComputePipelineState> m_pad;
    id<MTLComputePipelineState> m_pad_array;
    int m_pad_type;
    MPSNNPad *m_op;
    id<MTLBuffer> m_param;
}

- (id)initWithDevice:(id)a0 before:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 after:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 offset:(struct { long long x0; long long x1; long long x2; })a3;
- (id)initWithDevice:(id)a0 library:(id)a1 param:(id)a2;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;

@end
