@protocol MTLComputePipelineState;

@interface MPSCNNNeuronBNBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_relu;
}

- (void)encode:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 gamma:(id)a3 beta:(id)a4 reluPara:(id)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(int)a0 outh:(int)a1 outw:(int)a2 outc:(int)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
