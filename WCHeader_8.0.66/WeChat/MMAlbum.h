@interface MMAlbum : MMObject <NSCopying>

- (id)albumId;
- (id)name;
- (unsigned long long)photosCount;
- (id)coverImage;
- (void)shouldIncludeVideoAsset:(BOOL)a0;
- (id)assetOfIndex:(unsigned long long)a0;
- (void)stopICloudActivity;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)a0;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)a0;
- (id)lastAssetWithSecond:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
