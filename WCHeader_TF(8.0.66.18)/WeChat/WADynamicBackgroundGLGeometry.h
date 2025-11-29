@class NSMutableData;

@interface WADynamicBackgroundGLGeometry : WADynamicBackgroundGLObject {
    unsigned int vbo;
    BOOL vboValid;
}

@property (retain, nonatomic) NSMutableData *vertexData;
@property (nonatomic) unsigned long long geometryType;
@property (nonatomic) BOOL vboUpdated;

- (id)initWithGeometryType:(unsigned long long)a0;
- (void)dealloc;
- (void)appendVertex:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })a0;
- (void)appendVertexXYZRGBA:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; })a0;
- (unsigned int)getVBO;
- (void)updateVBOIfNeeded;
- (int)vertexCount;
- (int)vertexXYZRGBACount;
- (void)cleanVertex;
- (void).cxx_destruct;

@end
