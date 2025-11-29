@protocol MTLComputePipelineState;

@interface MPSCNNNeuronConvC4common : MPSCNNKernel {
    id<MTLComputePipelineState> m_commonconv;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 weightImage:(id)a2 biasmage:(id)a3 destinationImage:(id)a4 reluFlag:(id)a5 reluType:(id)a6 reluMax:(id)a7 reluSlope:(id)a8 inHeight:(id)a9 inWidth:(id)a10 inChannelBlocks:(id)a11 outHeight:(id)a12 outWidth:(id)a13 kernelH:(id)a14 kernelW:(id)a15 strideH:(id)a16 strideW:(id)a17 padT:(id)a18 padL:(id)a19 dilationH:(id)a20 dilationW:(id)a21 biasFlag:(id)a22 widthBlocks:(id)a23 conv_outh:(int)a24 conv_outw:(int)a25 conv_outc:(int)a26;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
