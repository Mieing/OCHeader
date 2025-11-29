@interface FlutterDarwinExternalTextureSkImageWrapper : NSObject

+ (struct sk_sp<SkImage> { struct SkImage *x0; })wrapYUVATexture:(id)a0 UVTex:(id)a1 YUVColorSpace:(int)a2 grContext:(void *)a3 width:(unsigned long long)a4 height:(unsigned long long)a5;
+ (struct sk_sp<SkImage> { struct SkImage *x0; })wrapRGBATexture:(id)a0 grContext:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;

@end
