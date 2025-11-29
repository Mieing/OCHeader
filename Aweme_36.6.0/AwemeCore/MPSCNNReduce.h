@protocol MTLComputePipelineState;

@interface MPSCNNReduce : MPSCNNKernel {
    id<MTLComputePipelineState> m_reduce;
    id<MTLComputePipelineState> m_reduce_in_array;
    int m_array_size;
    int m_reduceType;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 channel_type:(int)a3 param:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 reduce_type:(int)a2 channel_type:(int)a3 array_size:(int)a4;
- (void).cxx_destruct;

@end
