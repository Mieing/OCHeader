@class NSString, PHAsset;

@interface CreationKitAlbum.AssetMediaWrapper : _TtCs12_SwiftObject <CKAMediaProtocol>

@property (nonatomic, readonly) BOOL isFavorite;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } pixelSize;
@property (nonatomic, readonly) NSString *mediaID;
@property (nonatomic, readonly) PHAsset *asset;

- (int)getImageWithImageSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 networkAccessAllowed:(BOOL)a2 resizeMode:(long long)a3 iCloudBlock:(id /* block */)a4 progressHandler:(id /* block */)a5 completion:(id /* block */)a6;

@end
