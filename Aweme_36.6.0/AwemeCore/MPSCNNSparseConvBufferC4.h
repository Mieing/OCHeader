@protocol MTLComputePipelineState;

@interface MPSCNNSparseConvBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_func_opt;
}

- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 weight:(id)a4 bias:(id)a5 offset:(id)a6 index:(id)a7;
- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 weight:(id)a4 bias:(id)a5 pos:(id)a6;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1 halfconv:(BOOL)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
