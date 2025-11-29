@class NLEImage_OC;

@interface ACCNLEImageWrapper : NSObject <NSCopying>

@property (retain, nonatomic) NLEImage_OC *NLEImage;

+ (id)restore:(id)a0;
+ (id)createNLEImageWithWidth:(long long)a0 height:(long long)a1;
+ (id)openImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)getResources;
- (void)deleteLayer:(id)a0;
- (int)convertToNLEPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (void)setText:(id)a0 text:(id)a1;
- (int)getLayerBoundsInSurface:(id)a0 bounds:(struct CGPoint { double x0; double x1; }[4])a1;
- (id)getExportImage;
- (int)setRedrawCallback:(id /* block */)a0 data:(id)a1;
- (void)setImageLayerTransformContent:(BOOL)a0 redrawSync:(BOOL)a1;
- (int)applyTemplate:(id)a0;
- (id)getLayers;
- (id)getLayerByLayerId:(id)a0;
- (int)moveLayer:(id)a0 destGroupId:(id)a1 destToIndex:(long long)a2;
- (id)getMainImageLayer;
- (int)getLayerIndexInGroup:(id)a0;
- (void)detachRender;
- (void)redrawSync;
- (struct CGPoint { double x0; double x1; })getCanvasScale;
- (int)scaleCanvas:(struct CGPoint { double x0; double x1; })a0;
- (int)addLayer:(id)a0 parentId:(id)a1;
- (int)addLayer:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)moveLayer:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (double)getCanvasWidth;
- (double)getCanvasHeight;
- (int)convertToSurfacePoint:(struct CGPoint { double x0; double x1; } *)a0;
- (int)moveLayerOnTop:(id)a0;
- (void)rotateLayer:(id)a0 rotate:(double)a1;
- (id)saveCurrentNLEImage;
- (int)applyTemplateFile:(id)a0;
- (int)getLayerBounds:(id)a0 bounds:(struct CGPoint { double x0; double x1; }[4])a1;
- (struct CGPoint { double x0; double x1; })getCanvasPosition;
- (id)getLayerAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)exportImageToPath:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)updateLayer:(id)a0;
- (int)addLayer:(id)a0;
- (void)redraw;
- (void)setRender:(id)a0;

@end
