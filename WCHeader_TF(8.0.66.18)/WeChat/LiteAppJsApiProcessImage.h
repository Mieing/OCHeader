@interface LiteAppJsApiProcessImage : LiteAppJsApi

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;

@end
