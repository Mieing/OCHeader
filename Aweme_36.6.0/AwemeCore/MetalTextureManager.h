@class NSString, NSMutableArray;

@interface MetalTextureManager : NSObject <MetalFilterSource> {
    NSMutableArray *textureArray;
    struct __CVMetalTextureCache { } *_videoTextureCache;
    NSMutableArray *pixelTextureArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setEnableStrideAlignment:(BOOL)a0;
+ (id)getInstance;

- (void)clearTextureArrayAll;
- (id)getTextureWithWidth:(int)a0 height:(int)a1 pixelFormat:(unsigned long long)a2 isGPUPrivate:(BOOL)a3 usage:(unsigned long long)a4;
- (id)getTextureWithWidth:(int)a0 height:(int)a1 pixelFormat:(unsigned long long)a2;
- (id)getPixelTextureWithWidth:(int)a0 height:(int)a1 pixFmt:(id)a2 needGenTexture:(unsigned char)a3;
- (int)genTextureFromPixel:(id)a0;
- (void)returnPixelTexture:(id)a0;
- (int)genTextureFromPixel:(id)a0 withFormat:(id)a1;
- (BOOL)returnBmfResult:(void *)a0;
- (id)getPixelTextureFromImage:(struct CGImage { } *)a0;
- (BOOL)copyTexture:(id)a0 dst:(id)a1;
- (void)clearPixTexturArrayAll;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;
- (void)dealloc;
- (void)returnTexture:(id)a0;

@end
