@interface SkityCanvas : NSObject {
    void *_canvas;
}

@property (readonly) double contentScale;

- (void)saveLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAlpha:(double)a1;
- (void)drawTextBlob:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textAlignment:(long long)a2;
- (void)drawRoundRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radX:(double)a1 radY:(double)a2 paint:(id)a3;
- (void)drawImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentMode:(long long)a3;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithScale:(double)a0 handler:(void *)a1;
- (void)drawColor:(id)a0 blendMode:(unsigned long long)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paint:(id)a1;
- (void)drawText:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 anchorType:(unsigned long long)a2;
- (void)drawTextBlob:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 anchorType:(unsigned long long)a2;
- (void)restore;

@end
