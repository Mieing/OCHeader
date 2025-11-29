@interface ACCQuickSaveAlbumHelper : NSObject

+ (void)downloadTransitionEffectModelWithEffectId:(id)a0 completion:(id /* block */)a1;
+ (BOOL)containTransition:(id)a0;
+ (BOOL)containMVTack:(id)a0;
+ (BOOL)canUseOriginImage:(id)a0;
+ (BOOL)canRemoveBlackEdgeInSaveImagesAsVideo:(id)a0;
+ (BOOL)saveImagesToVideoOptEnableWith:(id)a0;
+ (void)configRemoveBlackEdgeFlagIfNeedWith:(id)a0;
+ (struct CGSize { double x0; double x1; })photoCanvasSizeWith:(id)a0;
+ (struct CGSize { double x0; double x1; })videoCanvasSizeWith:(id)a0 maxResolution:(struct CGSize { double x0; double x1; })a1;

@end
