@protocol MTLComputePipelineState;

@interface MPSCNNDeConvBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_deconv_buffer;
}

- (void)encode:(id)a0 input:(id)a1 output:(id)a2 weight:(id)a3 bias:(id)a4 param:(id)a5;
- (id)initWithDevice:(id)a0 library:(id)a1 isDepthwise:(BOOL)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
