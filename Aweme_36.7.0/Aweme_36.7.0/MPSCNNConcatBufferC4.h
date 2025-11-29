@protocol MTLComputePipelineState;

@interface MPSCNNConcatBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_concat_buffer;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 input2:(id)a3 input3:(id)a4 input4:(id)a5 input5:(id)a6 output:(id)a7 params:(id)a8;
- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 input2:(id)a3 input3:(id)a4 input4:(id)a5 output:(id)a6 params:(id)a7;
- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 input2:(id)a3 input3:(id)a4 output:(id)a5 params:(id)a6;
- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 input2:(id)a3 output:(id)a4 params:(id)a5;
- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3 params:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 inputNum:(int)a2 isMod4:(BOOL)a3;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
