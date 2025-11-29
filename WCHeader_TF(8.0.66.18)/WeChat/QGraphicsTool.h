@class NSString, NSMutableDictionary, CATextLayer;

@interface QGraphicsTool : NSObject

@property (copy) NSString *fontName;
@property (copy) NSString *boldFontName;
@property (retain, nonatomic) NSMutableDictionary *dictionaryFontSizes;
@property (retain, nonatomic) CATextLayer *textLayer;
@property (retain, nonatomic) NSMutableDictionary *dictionaryImages;

- (id)init;
- (id)defaultFontName;
- (id)defaultBoldFontName;
- (id)getFontName:(BOOL)a0;
- (void)drawString:(struct TMBitmapContext { int x0; int x1; int x2; int x3; int x4; float x5; int x6; void *x7; char *x8[1]; } *)a0 text:(unsigned short *)a1 count:(int)a2 fontSize:(int)a3 bold:(BOOL)a4 density:(float)a5;
- (id)drawStringImage:(id)a0 fontSize:(double)a1 color:(id)a2 strokeColor:(id)a3 strokeWidth:(double)a4;
- (struct TMSize { int x0; int x1; })calcTextSize:(unsigned short *)a0 count:(int)a1 fontSize:(int)a2 bold:(BOOL)a3;
- (struct TMBitmapContext { int x0; int x1; int x2; int x3; int x4; float x5; int x6; void *x7; char *x8[1]; } *)drawImage:(id)a0 anchorPointX1:(float *)a1 anchorPointY1:(float *)a2;
- (struct TMBitmapContext { int x0; int x1; int x2; int x3; int x4; float x5; int x6; void *x7; char *x8[1]; } *)generateRect:(id)a0;
- (struct TMBitmapContext { int x0; int x1; int x2; int x3; int x4; float x5; int x6; void *x7; char *x8[1]; } *)generateRouteArrowTexture:(int)a0;
- (void)drawRoundRect:(struct CGContext { } *)a0 width:(int)a1 height:(int)a2 radius:(double)a3 borderWidth:(double)a4;
- (id)getTextAttributeString:(unsigned short *)a0 count:(int)a1 fontSize:(int)a2 bold:(BOOL)a3;
- (id)getImageFromView:(id)a0;
- (void).cxx_destruct;

@end
