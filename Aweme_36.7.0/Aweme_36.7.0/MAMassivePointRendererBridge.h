@class UIImage;

@interface MAMassivePointRendererBridge : MABaseRendererBridge {
    UIImage *_icon;
    struct CGSize { double width; double height; } _pointSize;
}

- (void)initializeCppRenderer;
- (void)glRender;
- (void *)cppRender;
- (id)ObjCItemFromCppItem:(void *)a0;
- (id)multiPointOverlay;
- (void)onTappedWithPoint:(struct MAMapPoint { double x0; double x1; })a0 callback:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })pointSize;
- (void)setIcon:(id)a0;
- (void)setAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setPointSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })anchor;

@end
