@interface CAKAlbumThumbnailLoadUtil : NSObject

+ (int)fetchThumbnailImageWithAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 requestIdDidChangedHandler:(id /* block */)a2 completion:(id /* block */)a3;
+ (struct CGSize { double x0; double x1; })preferredLoadSizeWithColumnCount:(long long)a0;
+ (struct CGSize { double x0; double x1; })iCloudOptimizeSize;

@end
