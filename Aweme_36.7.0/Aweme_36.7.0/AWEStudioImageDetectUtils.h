@interface AWEStudioImageDetectUtils : NSObject

+ (id)exportImagePathsWithAssets:(id)a0;
+ (id)imagePathsWithImages:(id)a0;
+ (void)fetchEffectPathWithEffectID:(id)a0 block:(id /* block */)a1;
+ (id)cache_effectPathWithEffecID:(id)a0;
+ (void)cache_setEffectPath:(id)a0 forEffectID:(id)a1;
+ (id)cache_imagePathWithAssetModel:(id)a0;
+ (void)cache_setImagePath:(id)a0 forAssetModel:(id)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;

@end
