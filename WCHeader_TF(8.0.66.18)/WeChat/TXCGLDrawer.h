@class TXCGlProgram, TXCVideoFrameCoords;
@protocol TXIGlContext;

@interface TXCGLDrawer : NSObject {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _planeBuffer;
}

@property (readonly, nonatomic) id<TXIGlContext> context;
@property (readonly, nonatomic) TXCVideoFrameCoords *coords;
@property (retain, nonatomic) TXCGlProgram *program;
@property (nonatomic) unsigned int positionAttr;
@property (nonatomic) unsigned int textureCordAttr;
@property (nonatomic) long long textureWidth;
@property (nonatomic) long long textureHeight;

+ (id)createDrawerWithType:(unsigned long long)a0 context:(id)a1 coords:(id)a2;

- (id)initWithContext:(id)a0 coords:(id)a1;
- (unsigned long long)getType;
- (struct CGSize { double x0; double x1; })getTextureSize;
- (BOOL)drawPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)drawTexture:(unsigned int)a0 width:(double)a1 height:(double)a2;
- (void)draw;
- (unsigned int)createTexture:(unsigned int)a0;
- (void)setupCoordsAndDraw;
- (BOOL)textureCacheUploadTexture:(struct __CVBuffer **)a0 pixelBuffer:(struct __CVBuffer { } *)a1 planeIndex:(int)a2 pixelFormat:(unsigned int)a3;
- (void)texImageUploadTexture:(unsigned int)a0 textureTarget:(unsigned int)a1 pixelBuffer:(struct __CVBuffer { } *)a2 planeIndex:(int)a3 pixelFormat:(unsigned int)a4;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
