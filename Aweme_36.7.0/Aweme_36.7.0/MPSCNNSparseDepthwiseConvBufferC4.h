@protocol MTLComputePipelineState;

@interface MPSCNNSparseDepthwiseConvBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_func_opt;
    int m_type;
}

- (id)initWithDevice:(id)a0 library:(id)a1 dw_type:(int)a2;
- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 weight:(id)a4 bias:(id)a5 pos:(id)a6;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
