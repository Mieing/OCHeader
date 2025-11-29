@class NSMutableDictionary, NLEImageRender_OC;

@interface NLEImage_OC : NSObject

@property (retain, nonatomic) NSMutableDictionary *layers;
@property (retain, nonatomic) NLEImageRender_OC *nleImageRender;
@property (nonatomic) double pixelRatio;
@property (nonatomic) struct shared_ptr<nleimage_api::NLEImage> { struct NLEImage *__ptr_; struct __shared_weak_count *__cntrl_; } cppImage;

+ (id)getMaxVersion;
+ (id)restore:(id)a0;
+ (id)openImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)applyDiff6902:(id)a0 diff7386:(id)a1;
+ (id)createNLEImage:(long long)a0 height:(long long)a1;
+ (id)openTemplate:(id)a0;
+ (id)openTemplateFile:(id)a0;
+ (id)applyDiff7386:(id)a0 diff7386:(id)a1;
+ (id)save:(id)a0;

- (id)initWithCPPNode:(struct shared_ptr<nleimage_api::NLEImage> { struct NLEImage *x0; struct __shared_weak_count *x1; })a0;
- (id)getResources;
- (int)deleteLayer:(id)a0;
- (int)convertToNLEPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (int)getLayerBoundsInSurface:(id)a0 bounds:(struct CGPoint { double x0; double x1; }[4])a1;
- (id)getExportImage;
- (int)setRedrawCallback:(id)a0 data:(id)a1;
- (void)setImageLayerTransformContent:(BOOL)a0 redrawSync:(BOOL)a1;
- (int)applyTemplate:(id)a0;
- (id)getLayers;
- (id)getMainImageLayer;
- (int)getLayerIndexInGroup:(id)a0;
- (int)detachRender;
- (void)redrawSync;
- (int)scaleCanvas:(struct CGPoint { double x0; double x1; })a0;
- (int)convertToSurfacePoint:(struct CGPoint { double x0; double x1; } *)a0;
- (int)moveLayerOnTop:(id)a0;
- (void)attachRender:(id)a0;
- (int)moveLayerTo:(id)a0 destGroupId:(id)a1 destToIndex:(int)a2;
- (id)getCanvasTransform;
- (int)applyTemplateFile:(id)a0;
- (id)getLayer:(id)a0;
- (id)hittest:(struct CGPoint { double x0; double x1; })a0;
- (int)getLayerBounds:(id)a0 bounds:(struct CGPoint { double x0; double x1; }[4])a1;
- (int)addLayerTo:(id)a0 parentId:(id)a1;
- (void)exportImage:(id)a0;
- (struct shared_ptr<nleimage_api::NLEImage> { struct NLEImage *x0; struct __shared_weak_count *x1; })getCppImage;
- (void)initLayers_OC;
- (id)translateLayer:(void *)a0;
- (int)applyToImages:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)applyTemplateWithNLEImage:(id)a0;
- (id)hittestPro:(struct CGPoint { double x0; double x1; })a0;
- (int)getLayerSubBoundsCount:(id)a0;
- (int)getLayerSubBoundsAt:(id)a0 subBoundsIndex:(int)a1 bounds:(struct CGPoint { double x0; double x1; }[4])a2;
- (id)getLayerTransform:(id)a0;
- (id)getLayerTransformInSurface:(id)a0;
- (int)getPlaceholderCount;
- (int)applyTemplateWithAutoFit:(id)a0;
- (int)applyToImages:(id)a0 width:(int)a1 height:(int)a2;
- (int)applyToImagesWithAutoFit:(id)a0 width:(int)a1 height:(int)a2;
- (void)setConfig:(id)a0;
- (void).cxx_destruct;
- (int)layout;
- (id)init;
- (id).cxx_construct;
- (id)getVersion;
- (int)getWidth;
- (int)getHeight;
- (int)updateLayer:(id)a0;
- (int)addLayer:(id)a0;
- (void)redraw;

@end
