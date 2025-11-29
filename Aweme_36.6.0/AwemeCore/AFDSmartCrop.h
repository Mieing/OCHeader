@interface AFDSmartCrop : NSObject

+ (void)downloadResourcesIfNeeded;
+ (id)cropImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 withCenter:(struct CGPoint { double x0; double x1; })a2;
+ (void)smartCropImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (void)smartCropImage:(id)a0 toAspectRatio:(double)a1 completion:(id /* block */)a2;
+ (id)cropImage:(id)a0 toAspectRatio:(double)a1 withCenter:(struct CGPoint { double x0; double x1; })a2;
+ (void)smartCropImageWithURLArray:(id)a0 toAspectRatio:(double)a1 cacheKey:(id)a2 completion:(id /* block */)a3;
+ (id)sharedCache;
+ (struct CGSize { double x0; double x1; })getImageSize:(id)a0;

@end
