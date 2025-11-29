@class WeVisGLProgram;

@interface WeVisGLCompose2RGBAV2 : NSObject {
    int _outputWidth;
    int _outputHeight;
    unsigned int _maxComposeCnt;
    unsigned int _maxTextureUnits;
    WeVisGLProgram *_rgbaProgram;
    WeVisGLProgram *_yuv420Program;
    unsigned int _uvRGBAMatrixLoc;
    unsigned int _uvRGBATranslateLoc;
    unsigned int _uvYUVMatrixLoc;
    unsigned int _uvYUVTranslateLoc;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int _elementIndexSlot;
    unsigned int _yuvToRgbMatrixLoc;
    unsigned int _yuvOffsetLoc;
}

@property (readonly, nonatomic) BOOL isInitialized;

- (id)init;
- (void)bindUniformLocations;
- (void)setOutputWidth:(int)a0 outputHeight:(int)a1;
- (void)composeElements:(id)a0 transpose:(BOOL)a1 rotation:(int)a2;
- (void)composeElements:(id)a0 uvTransform:(int)a1;
- (id)createBatchesFromElements:(id)a0;
- (void)renderBatch:(id)a0 uvTransform:(int)a1;
- (id)programForFormatType:(long long)a0;
- (void)convertVerticeCoordinateForElement:(id)a0 toArray:(float *)a1;
- (void)convertTexCoordinateForElement:(id)a0 toArray:(float *)a1;
- (void)convertTexCoordinateToFillModeForElement:(id)a0 inArray:(float *)a1;
- (void).cxx_destruct;

@end
