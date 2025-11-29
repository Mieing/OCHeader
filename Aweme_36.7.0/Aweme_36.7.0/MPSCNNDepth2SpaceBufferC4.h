@protocol MTLComputePipelineState;

@interface MPSCNNDepth2SpaceBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_depth2space;
}

- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 dispatchThreads:(BOOL)a5;
- (id)initWithDevice:(id)a0 library:(id)a1 type:(int)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
