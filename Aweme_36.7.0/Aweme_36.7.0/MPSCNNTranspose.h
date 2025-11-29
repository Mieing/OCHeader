@protocol MTLComputePipelineState;

@interface MPSCNNTranspose : MPSCNNKernel {
    id<MTLComputePipelineState> m_transpose;
    id<MTLComputePipelineState> m_image_to_buffer;
    id<MTLComputePipelineState> m_buffer_to_image;
    id<MTLComputePipelineState> m_image_to_buffer_array;
    id<MTLComputePipelineState> m_buffer_to_image_array;
}

- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2 transposeIn:(id)a3 transposeOut:(id)a4 params:(id)a5 transposeGlobalSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
