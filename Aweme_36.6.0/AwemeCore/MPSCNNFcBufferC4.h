@protocol MTLComputePipelineState;

@interface MPSCNNFcBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_fc_buffer_c4;
}

- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 weight:(id)a4 bias:(id)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
