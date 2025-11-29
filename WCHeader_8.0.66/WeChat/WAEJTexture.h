@class NSBlockOperation, NSString, NSMutableDictionary, WAEJFileSystem, NSMutableData, WAEJSharedTextureCache, WAEJTextureStorage;

@interface WAEJTexture : NSObject <NSCopying> {
    BOOL cached;
    BOOL isCompressed;
    BOOL dimensionsKnown;
    short width;
    short height;
    NSString *fullPath;
    WAEJTextureStorage *textureStorage;
    unsigned int fbo;
    NSMutableDictionary *params;
    NSBlockOperation *loadCallback;
    WAEJFileSystem *fileSystem;
}

@property (nonatomic) BOOL drawFlippedY;
@property (readonly, nonatomic) BOOL isDynamic;
@property (readonly, nonatomic) BOOL lazyLoaded;
@property (readonly, nonatomic) BOOL isExternalTexture;
@property (readonly, nonatomic) NSMutableData *pixels;
@property (readonly, nonatomic) unsigned int textureId;
@property (readonly, nonatomic) unsigned int format;
@property (readonly, nonatomic) short width;
@property (readonly, nonatomic) short height;
@property (readonly, nonatomic) double lastUsed;
@property (readonly, nonatomic) BOOL readOnly;
@property (nonatomic) BOOL loadFailedForBackground;
@property (nonatomic) BOOL originPixel;
@property (nonatomic) struct CGSize { double width; double height; } resize;
@property (nonatomic) double rescale;
@property (retain, nonatomic) WAEJSharedTextureCache *textureCache;
@property (nonatomic) struct sk_sp<SkImage> { struct SkImage *fPtr; } skImage;

+ (id)cachedTextureWithPathDeprecated:(id)a0 loadOnQueue:(id)a1 callback:(id)a2 cache:(id)a3 fileSystem:(id)a4 glContext:(id)a5;
+ (id)cachedTextureWithPath:(id)a0 loadOnQueue:(id)a1 callback:(id)a2 cache:(id)a3 fileSystem:(id)a4 glContext:(id)a5;
+ (id)imageWithPixels:(id)a0 width:(int)a1 height:(int)a2;
+ (id)imageWithPixelsAndScale:(id)a0 width:(int)a1 height:(int)a2 scale:(float)a3;
+ (void)premultiplyPixels:(const char *)a0 to:(char *)a1 byteLength:(int)a2 format:(unsigned int)a3 scriptView:(id)a4;
+ (void)unPremultiplyPixels:(const char *)a0 to:(char *)a1 byteLength:(int)a2 format:(unsigned int)a3 scriptView:(id)a4;
+ (void)flipPixelsY:(char *)a0 bytesPerRow:(int)a1 rows:(int)a2;

- (id)init;
- (id)initWithPath:(id)a0;
- (id)initWithPathDeprecated:(id)a0 loadOnQueue:(id)a1 callback:(id)a2 fileSystem:(id)a3 glContext:(id)a4;
- (id)initWithPath:(id)a0 loadOnQueue:(id)a1 callback:(id)a2 fileSystem:(id)a3 glContext:(id)a4;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (id)initWithWidth:(int)a0 height:(int)a1 format:(unsigned int)a2;
- (id)initWithWidth:(int)a0 height:(int)a1 pixels:(id)a2;
- (id)initAsRenderTargetWithWidth:(int)a0 height:(int)a1 fbo:(unsigned int)a2;
- (id)initWithUIImage:(id)a0;
- (id)initWithSkImage:(struct sk_sp<SkImage> { struct SkImage *x0; })a0;
- (void)dealloc;
- (void)maybeReleaseStorage;
- (void)ensureMutableKeepPixels:(BOOL)a0 forTarget:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createWithTexture:(id)a0;
- (void)onCallback:(id)a0;
- (void)createWhenCallbackLoaded:(id)a0;
- (void)createWithPixels:(id)a0 format:(unsigned int)a1;
- (void)createWithPixels:(id)a0 format:(unsigned int)a1 target:(unsigned int)a2;
- (void)uploadCompressedPixels:(id)a0 target:(unsigned int)a1;
- (void)updateWithPixels:(id)a0 atX:(int)a1 y:(int)a2 width:(int)a3 height:(int)a4;
- (id)loadOriginPixel:(id)a0 data:(id)a1;
- (id)loadPixelsFromPath:(id)a0;
- (id)loadPixelsFromUIImage:(id)a0;
- (id)getParam:(unsigned int)a0;
- (void)setParam:(unsigned int)a0 param:(id)a1;
- (void)bindWithFilter:(unsigned int)a0;
- (void)bindToTarget:(unsigned int)a0;
- (void)changeGLTexture:(unsigned int)a0 target:(unsigned int)a1;
- (id)image;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
