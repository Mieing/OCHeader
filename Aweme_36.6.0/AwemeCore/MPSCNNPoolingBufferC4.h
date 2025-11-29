@protocol MTLComputePipelineState;

@interface MPSCNNPoolingBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_pooling_buffer_max;
    id<MTLComputePipelineState> m_pooling_buffer_avg;
    id<MTLComputePipelineState> m_pooling_buffer_global_max;
    id<MTLComputePipelineState> m_pooling_buffer_global_avg;
}

- (void)encode:(id)a0 state:(id)a1 input:(id)a2 output:(id)a3 param:(id)a4;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })getGridSizeGlobal:(id)a0;
- (id)getPipelineState:(int)a0 global:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
