@class UIGraphicsImageRendererFormat;

@interface MMGraphicsImageRenderer : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) BOOL useBounds;
@property (retain, nonatomic) UIGraphicsImageRendererFormat *format;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;
- (id)imageWithActions:(id /* block */)a0;
- (id)PNGDataWithActions:(id /* block */)a0;
- (id)JPEGDataWithCompressionQuality:(double)a0 actions:(id /* block */)a1;
- (id)genRenderer;
- (id)genFormat;
- (void).cxx_destruct;

@end
