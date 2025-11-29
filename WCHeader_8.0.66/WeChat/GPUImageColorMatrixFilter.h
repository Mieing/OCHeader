@interface GPUImageColorMatrixFilter : GPUImageFilter {
    int colorMatrixUniform;
    int intensityUniform;
}

@property (nonatomic) struct GPUMatrix4x4 { struct GPUVector4 { float one; float two; float three; float four; } one; struct GPUVector4 { float one; float two; float three; float four; } two; struct GPUVector4 { float one; float two; float three; float four; } three; struct GPUVector4 { float one; float two; float three; float four; } four; } colorMatrix;
@property (nonatomic) double intensity;

- (id)init;

@end
