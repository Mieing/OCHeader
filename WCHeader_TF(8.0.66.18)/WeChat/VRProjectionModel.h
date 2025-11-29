@interface VRProjectionModel : NSObject {
    int mERPLatitudeGrid;
    int mERPLongitudeGrid;
    float mSphererRadius;
    int mDistortionRows;
    int mDistortionColumns;
    float mDistortionParamA;
    float mDistortionParamB;
    float mDistortionParamC;
    float mDistortionScale;
    int mNumIndices[4];
    float *mTexCoordinateBuffers[4];
    float *mVerticesBuffers[4];
    long long mCDNRotation;
}

- (id)init;
- (void)setERPLatitudeGrid:(int)a0;
- (void)setERPLongitudeGrid:(int)a0;
- (void)setSphererRadius:(float)a0;
- (void)setNumIndices:(int)a0 NumIndices:(int)a1 IsDistortion:(BOOL)a2;
- (int)getNumIndices:(int)a0 IsDistortion:(BOOL)a1;
- (void)setTexCoordinateBuffer:(int)a0 TexCoordinateBuffer:(float *)a1 Size:(int)a2 IsDistortion:(BOOL)a3;
- (float *)getTexCoordinateBuffer:(int)a0 IsDistortion:(BOOL)a1;
- (void)setVerticesBuffer:(int)a0 VerticesBuffer:(float *)a1 Size:(int)a2 IsDistortion:(BOOL)a3;
- (float *)getVerticesBuffer:(int)a0 IsDistortion:(BOOL)a1;
- (void)sphereMapping;
- (void)applyBarrelDistortion:(int)a0 Vertexs:(float *)a1;
- (void)barrelDistortion:(double)a0 ParamB:(double)a1 ParamC:(double)a2 SrcX:(float *)a3 SrcY:(float *)a4;
- (void)setProjectionModel:(int)a0 NumIndices:(int)a1 VerticesBuffers:(float *)a2 VerticesSize:(int)a3 TexCoordinateBuffers:(float *)a4 TexCoordinateSize:(int)a5;

@end
