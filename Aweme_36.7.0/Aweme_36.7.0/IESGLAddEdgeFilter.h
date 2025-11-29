@class HTSGLFramebuffer, IESVideoAddEdgeData;

@interface IESGLAddEdgeFilter : HTSGLFilter {
    float _imageVertices[8];
}

@property (retain, nonatomic) HTSGLFramebuffer *backgroundBuffer;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) struct CGSize { double width; double height; } realVideoSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputVideoSize;
@property (retain, nonatomic) IESVideoAddEdgeData *addEdgeInfo;

- (struct CGSize { double x0; double x1; })outputFrameSize;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)initializeRenderer:(id)a0;
- (void)resetFrameVertices;
- (void)setBackGroundColor:(float)a0 g:(float)a1 b:(float)a2;
- (struct CGSize { double x0; double x1; })getRealVideoSize;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
