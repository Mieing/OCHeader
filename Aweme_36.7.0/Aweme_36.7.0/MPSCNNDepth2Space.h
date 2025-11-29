@protocol MTLComputePipelineState;

@interface MPSCNNDepth2Space : MPSCNNKernel {
    id<MTLComputePipelineState> m_depth2space_src_4_dst_1;
    id<MTLComputePipelineState> m_depth2space_src_array_dst_1;
    id<MTLComputePipelineState> m_depth2space_src_array_dst_2;
    id<MTLComputePipelineState> m_depth2space_src_array_dst_3;
    id<MTLComputePipelineState> m_depth2space_src_array_dst_4;
    id<MTLComputePipelineState> m_depth2space_src_array_dst_array;
    int m_outChannel;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 outChannel:(int)a3 bufferSrcChannel:(id)a4 bufferBlockSize:(id)a5;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
