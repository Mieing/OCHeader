@protocol MTLComputePipelineState;

@interface MPSCNNTile : MPSCNNKernel {
    id<MTLComputePipelineState> m_tile_Tex2Tex;
    id<MTLComputePipelineState> m_tile_Tex2TexArray;
    id<MTLComputePipelineState> m_tile_TexArray2TexArray;
}

- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
