@protocol MTLComputePipelineState;

@interface MPSCNNDWConvBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_conv_buffer;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(int)a0 outh:(int)a1 outw:(int)a2 outcdiv4:(int)a3;
- (id)initWithDevice:(id)a0 library:(id)a1 dw_type:(int)a2;
- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 weight:(id)a4 bias:(id)a5 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a6 dispatchThreads:(BOOL)a7;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
