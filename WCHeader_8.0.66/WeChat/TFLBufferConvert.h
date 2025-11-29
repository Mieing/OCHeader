@protocol MTLComputePipelineState;

@interface TFLBufferConvert : NSObject {
    id<MTLComputePipelineState> _program;
}

- (id)initWithDevice:(id)a0 isFloat16:(BOOL)a1 convertToPBHWC4:(BOOL)a2;
- (void)convertWithEncoder:(id)a0 shape:(const struct StrongShape<tflite::gpu::Layout::BHWC> { int x0; int x1; int x2; int x3; } *)a1 sourceBuffer:(id)a2 convertedBuffer:(id)a3;
- (void).cxx_destruct;

@end
