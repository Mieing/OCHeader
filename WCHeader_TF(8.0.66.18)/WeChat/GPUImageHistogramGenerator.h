@interface GPUImageHistogramGenerator : GPUImageFilter {
    int backgroundColorUniform;
}

- (id)init;
- (void)setBackgroundColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;

@end
