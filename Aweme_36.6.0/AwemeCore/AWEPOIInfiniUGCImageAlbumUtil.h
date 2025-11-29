@interface AWEPOIInfiniUGCImageAlbumUtil : NSObject

+ (id)firstImageWithPublishModel:(id)a0 index:(long long)a1;
+ (id)getEditVCWithPublishModel:(id)a0;
+ (id)showEditVCWithPublishModel:(id)a0 index:(long long)a1 controllerTag:(long long)a2 transitioningDelegate:(id)a3;
+ (id)__editInputDataWithPublishModel:(id)a0;
+ (void)trasferToImageAlbumModeWithPublishModel:(id)a0 assets:(id)a1 complete:(id /* block */)a2;
+ (id)showEditVCWithPublishModel:(id)a0 index:(long long)a1 transitioningDelegate:(id)a2;
+ (void)trasferToImageAlbumModeWithPublishModel:(id)a0 complete:(id /* block */)a1;
+ (void)makeInfiniShootPictureCavas:(id)a0 complete:(id /* block */)a1;
+ (id)saveImageToPath:(id)a0;
+ (void)transferToInfiniImageAlbumModeWithPublishModel:(id)a0 albumAssets:(id)a1 complete:(id /* block */)a2;

@end
