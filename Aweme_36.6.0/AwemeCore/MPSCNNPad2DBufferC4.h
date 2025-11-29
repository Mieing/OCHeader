@protocol MTLComputePipelineState;

@interface MPSCNNPad2DBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_pad2d_buffer_c4;
}

- (id)initWithDevice:(id)a0 library:(id)a1 padType:(int)a2;
- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
