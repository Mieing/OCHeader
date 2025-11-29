@class NSString, MMLivePixelBuffer, XImage;

@interface MMLiveRemoteTrtcRenderContext : NSObject

@property (retain) NSString *userId;
@property (retain) NSString *userName;
@property unsigned long long renderSrc;
@property (retain) MMLivePixelBuffer *pixelBuffer;
@property int texture;
@property struct CGSize { double width; double height; } textureSize;
@property (retain) XImage *texImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeFrame;
@property BOOL isFirstFrameRendered;
@property BOOL isFirstFrameFromCapture;

- (BOOL)isValid;
- (void)updateTexture:(int)a0 textureSize:(struct CGSize { double x0; double x1; })a1;
- (void)extractTexture:(int *)a0 textureSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)updateTexImage:(id)a0 textureSize:(struct CGSize { double x0; double x1; })a1;
- (void)extractTexImage:(id *)a0 textureSize:(struct CGSize { double x0; double x1; } *)a1;
- (id)description;
- (id)normalizeFrameDescription;
- (void).cxx_destruct;

@end
