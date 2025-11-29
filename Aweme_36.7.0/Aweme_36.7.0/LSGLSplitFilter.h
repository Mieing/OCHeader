@class LSGLProgram, NSMutableDictionary, LSGLFramebuffer;
@protocol LSGLInput;

@interface LSGLSplitFilter : LSGLFilter {
    LSGLFramebuffer *_inputFramebuffer;
    LSGLFramebuffer *outputFramebufferRight;
    NSMutableDictionary *_fboList;
    float _leftTexCoor[8];
    float _rightTexCoor[8];
    LSGLProgram *_filterProgram;
    id<LSGLInput> _leftTarget;
    id<LSGLInput> _rightTarget;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _localRect;
}

- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)updateTextureCoordinate;
- (struct CGSize { double x0; double x1; })leftoutputFrameSize;
- (struct CGSize { double x0; double x1; })rightoutputFrameSize;
- (void)informTarget:(id)a0 aboutNewFrame:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)outputFramebufferWithTextureId:(long long)a0;
- (void)setSplitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTarget:(id)a1 isLeft:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)removeTarget:(id)a0;

@end
