@interface HTSGLAddMaskLayerFilter : HTSGLFilter {
    int maskAlphaUniform;
}

@property (nonatomic) double maskAlpha;

- (void)initializeRenderer:(id)a0;
- (id)initWithContext:(id)a0;

@end
