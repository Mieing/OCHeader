@interface FlutterDarwinExternalTextureImpellerImageWrapper : NSObject

+ (struct sk_sp<flutter::DlImage> { struct DlImage *x0; })wrapYUVATexture:(id)a0 UVTex:(id)a1 YUVColorSpace:(int)a2 aiksContext:(void *)a3;
+ (struct sk_sp<flutter::DlImage> { struct DlImage *x0; })wrapRGBATexture:(id)a0 aiksContext:(void *)a1;

@end
