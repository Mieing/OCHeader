@interface GPUImageHSBFilter : GPUImageColorMatrixFilter {
    float matrix[4][4];
}

- (id)init;
- (void)reset;
- (void)rotateHue:(float)a0;
- (void)adjustSaturation:(float)a0;
- (void)adjustBrightness:(float)a0;
- (void)_updateColorMatrix;

@end
