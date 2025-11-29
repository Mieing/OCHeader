@class NSString, LSGLFramebuffer, LSGLProgram;

@interface LSGLCropFilter : LSGLOutput <LSGLInput> {
    float _cropTextureCoordinates[8];
    BOOL _shouldUpdateSize;
    LSGLProgram *_filterProgram;
    int _positionAttribute;
    int _textureCoordinateAttribute;
    int _inputTextureUniform;
    LSGLFramebuffer *_outputFrameBuffer;
    LSGLFramebuffer *_inputFrameBuffer;
}

@property (readonly, nonatomic) unsigned int outputPixelFormat;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)updateCropTextureCoordinate;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)enabled;

@end
