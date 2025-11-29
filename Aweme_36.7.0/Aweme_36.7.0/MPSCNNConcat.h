@protocol MTLComputePipelineState;

@interface MPSCNNConcat : MPSCNNKernel {
    id<MTLComputePipelineState> m_concat;
    id<MTLComputePipelineState> m_concat_out_array;
    id<MTLComputePipelineState> m_concat_array;
    id<MTLComputePipelineState> m_concat_in0_array;
    id<MTLComputePipelineState> m_concat_in1_array;
    id<MTLComputePipelineState> m_concat_array4;
    id<MTLComputePipelineState> m_concat_array123;
    int concatType;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 sourceImage2:(id)a2 destinationImage:(id)a3 params:(id)a4;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 sourceImage2:(id)a2 sourceImage3:(id)a3 sourceImage4:(id)a4 destinationImage:(id)a5 params:(id)a6;
- (id)initWithDevice:(id)a0 library:(id)a1 concatType:(int)a2;
- (void).cxx_destruct;

@end
