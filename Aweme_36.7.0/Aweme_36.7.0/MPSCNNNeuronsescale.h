@protocol MTLComputePipelineState;

@interface MPSCNNNeuronsescale : MPSCNNKernel {
    id<MTLComputePipelineState> m_commonrelu;
    id<MTLComputePipelineState> m_commonrelu_array;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage0:(id)a1 sourceImage1:(id)a2 destinationImage:(id)a3 inputh1:(id)a4 inputw1:(id)a5 inputc1:(id)a6 optype:(id)a7 relu_flag:(id)a8 relu_type:(id)a9 relu_max:(id)a10;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
