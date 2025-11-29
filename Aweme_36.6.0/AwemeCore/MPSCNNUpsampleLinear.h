@protocol MTLComputePipelineState, MTLBuffer;

@interface MPSCNNUpsampleLinear : MPSCNNKernel {
    id<MTLComputePipelineState> m_upsampleBilinear;
    id<MTLComputePipelineState> m_upsampleBilinearArray;
    id<MTLBuffer> m_halfPixel;
}

- (void)encodeToCommandBufferx:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 resizeType:(int)a2 alignCorner:(BOOL)a3 halfPixel:(BOOL)a4;
- (void).cxx_destruct;

@end
