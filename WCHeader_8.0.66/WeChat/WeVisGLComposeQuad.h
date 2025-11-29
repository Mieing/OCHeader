@class WeVisGLProgram, NSMutableArray;

@interface WeVisGLComposeQuad : NSObject {
    int outputWidth;
    int outputHeight;
    WeVisGLProgram *mQuadProgram;
    int mUVTransform;
    unsigned int positionSlot;
    unsigned int texCoordSlot;
    unsigned int elementIndexSlot;
    unsigned int mUvMatrixLoc;
    unsigned int mUvTranslateLoc;
    NSMutableArray *texUniformWrapperArr;
    unsigned int yuvTypeUniformArr[8];
    int maxComposeCnt;
}

@property (nonatomic) BOOL isInitialized;

- (id)initWithMaxSupportComposeCnt:(int)a0;
- (void)bindUniforms;
- (void)setOutputWidth:(int)a0 outputHeight:(int)a1;
- (void)composeElements:(id)a0 uvTransform:(int)a1;
- (void)convertVerticeCoordinateForElement:(id)a0 toArray:(float *)a1;
- (void)convertTexCoordinateForElement:(id)a0 toArray:(float *)a1;
- (void)convertTexCoordinateToFillModeForElement:(id)a0 inArray:(float *)a1;
- (const char *)getTextureYNameAtIndex:(int)a0;
- (const char *)getTextureUVNameAtIndex:(int)a0;
- (const char *)getYuvTypeNameAtIndex:(int)a0;
- (const char *)getRectNameAtIndex:(int)a0;
- (unsigned int)getTextureToBindAtIndex:(int)a0;
- (const char *)getUVScaleOffsetNameAtIndex:(int)a0;
- (void).cxx_destruct;

@end
