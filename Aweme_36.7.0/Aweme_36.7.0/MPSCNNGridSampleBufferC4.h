@protocol MTLComputePipelineState;

@interface MPSCNNGridSampleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_grid_sample_buffer_c4;
}

- (void)encode:(id)a0 input:(id)a1 grid:(id)a2 output:(id)a3 param:(id)a4;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1 mode:(int)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
