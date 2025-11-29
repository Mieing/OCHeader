@protocol MTLComputePipelineState;

@interface MPSCNNUpsampleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_upsample;
}

- (void)encode:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 params:(id)a3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 dispatchThreads:(BOOL)a5;
- (id)initWithDevice:(id)a0 library:(id)a1 resizeType:(int)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
