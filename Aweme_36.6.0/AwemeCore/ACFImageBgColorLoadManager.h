@interface ACFImageBgColorLoadManager : NSObject

+ (void)getBackgroundColorWithConfig:(id)a0 completion:(id /* block */)a1;
+ (id)getPreloadedImageBackgroundColorWithConfig:(id)a0;
+ (id)getImageBgColorWithConfig:(id)a0;
+ (id)adjustedBgColor:(id)a0 shouldAdjustBrightness:(BOOL)a1;
+ (void)saveImageBackgroundColor:(id)a0 key:(id)a1;
+ (id)imageBackgroundColorCache;
+ (id)unarchivedData:(id)a0 fromClass:(Class)a1;
+ (void)preloadImageBackgroundColorWithConfig:(id)a0;
+ (id)archivedDataWithObject:(id)a0;

@end
