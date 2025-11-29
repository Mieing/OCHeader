@interface ILAAssetManager : NSObject

+ (id)exportAVURLAsset:(id)a0 completion:(id /* block */)a1;
+ (void)syncRequestLocalImageWithAssetId:(id)a0 size:(struct CGSize { double x0; double x1; })a1 protocol:(id)a2 completion:(id /* block */)a3;
+ (void)syncRequestLocalVideoWithAssetId:(id)a0 size:(struct CGSize { double x0; double x1; })a1 protocol:(id)a2 completion:(id /* block */)a3;
+ (void)syncRequestICloudOptimizeImageWithLocalId:(id)a0 size:(struct CGSize { double x0; double x1; })a1 protocol:(id)a2 completion:(id /* block */)a3;

@end
