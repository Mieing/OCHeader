@interface LVVEDataPackagerHelper : NSObject

+ (id)verticesForCrop:(id)a0;
+ (void)updateCanvasSource:(id)a0 fromClip:(id)a1 cropScale:(float)a2;
+ (id)canvasConfigForCanvasMaterial:(id)a0 rootPath:(id)a1;
+ (double)contentAnimationDuration;
+ (double)fitScaleWithCanvasConfig:(id)a0;
+ (double)originLogoScale;
+ (id)filePathInDraft:(id)a0 relativePath:(id)a1;

@end
