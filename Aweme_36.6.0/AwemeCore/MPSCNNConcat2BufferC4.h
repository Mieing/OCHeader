@protocol MTLComputePipelineState;

@interface MPSCNNConcat2BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_concat2_buffer;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 input2:(id)a3 output:(id)a4 params:(id)a5 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a6 dispatchThreads:(BOOL)a7;
- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3 params:(id)a4 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a5 dispatchThreads:(BOOL)a6;
- (id)initWithDevice:(id)a0 library:(id)a1 concat_type:(int)a2 concat_num:(int)a3;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
