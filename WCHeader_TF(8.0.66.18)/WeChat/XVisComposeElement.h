@class XImage;

@interface XVisComposeElement : NSObject {
    void *yTexture;
    void *uvTexture;
    void *rgbaTexture;
}

@property (nonatomic) int formatType;
@property (retain, nonatomic) XImage *yImage;
@property (retain, nonatomic) XImage *uvImage;
@property (retain, nonatomic) XImage *rgbaImage;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeFrame;

- (void)transferFromRenderFrame:(id)a0;
- (BOOL)isValid;
- (void)clear;
- (int)getElementFormatFromRenderFormat:(long long)a0;
- (void).cxx_destruct;

@end
