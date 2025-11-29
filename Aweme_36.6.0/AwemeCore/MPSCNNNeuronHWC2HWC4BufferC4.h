@protocol MTLComputePipelineState;

@interface MPSCNNNeuronHWC2HWC4BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_float2half_hwc4;
    id<MTLComputePipelineState> m_half2float_hwc4;
    id<MTLComputePipelineState> m_hwc2tohwc4;
    id<MTLComputePipelineState> m_hwc4tohwc;
    id<MTLComputePipelineState> m_hwcHalf2tohwc4;
    id<MTLComputePipelineState> m_hwc4tohwcHalf;
    id<MTLComputePipelineState> m_hwcTextureToHwc4Texture;
    id<MTLComputePipelineState> m_hwc4TextureToHwcTexture;
    id<MTLComputePipelineState> m_hwcTextureToHwc4Buffer;
    id<MTLComputePipelineState> m_hwc4BufferToHwcTexture;
}

- (void)encodeHwc2Hwc4:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 params:(id)a3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 dispatchThreads:(BOOL)a5;
- (void)encodeHwcHalf2Hwc4:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 params:(id)a3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 dispatchThreads:(BOOL)a5;
- (void)encodeHwc_to_hwc4:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 para:(id)a3 outh:(int)a4 outw:(int)a5 batch:(int)a6;
- (void)encodeHwc_to_hwc4_tuned:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 para:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 encoder:(id)a1 sourceBuffer:(id)a2 destinationBuffer:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBuffer:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 para:(id)a3 outh:(int)a4 outw:(int)a5 batch:(int)a6;
- (void)encodeToCommandBufferfloat2half_hwc4:(id)a0 encoder:(id)a1 sourceBuffer:(id)a2 destinationBuffer:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBufferfloat2half_hwc4:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 para:(id)a3 outh:(int)a4 outw:(int)a5 batch:(int)a6;
- (void)encodeToCommandBufferhalf2float_hwc4:(id)a0 encoder:(id)a1 sourceBuffer:(id)a2 destinationBuffer:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBufferhalf2float_hwc4:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 para:(id)a3 outh:(int)a4 outw:(int)a5 batch:(int)a6;
- (void)encodeToCommandBufferhwc4_buffer_to_hwc_texture:(id)a0 encoder:(id)a1 sourceBuffer:(id)a2 destinationTexture:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBufferhwc_texture_to_hwc4_buffer:(id)a0 encoder:(id)a1 sourceTexture:(id)a2 destinationBuffer:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBufferhwc_texture_to_hwc4_texture:(id)a0 encoder:(id)a1 sourceBuffer:(id)a2 destinationBuffer:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBufferhwc_to_hwc4:(id)a0 encoder:(id)a1 sourceBuffer:(id)a2 destinationBuffer:(id)a3 para:(id)a4 outh:(int)a5 outw:(int)a6 batch:(int)a7;
- (void)encodeToCommandBufferhwc_to_hwc4:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 para:(id)a3 outh:(int)a4 outw:(int)a5 batch:(int)a6;
- (id)getHwc2hwc4PipelineState;
- (id)getHwc42hwcPipelineState;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
