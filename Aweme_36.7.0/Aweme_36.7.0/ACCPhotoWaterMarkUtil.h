@interface ACCPhotoWaterMarkUtil : NSObject

+ (id)p_fullSizeImageWithSourceImageSize:(struct CGSize { double x0; double x1; })a0 waterMarkImageName:(id)a1;
+ (void)acc_addWaterMarkWithPadding:(BOOL)a0 sourceImage:(id)a1 waterMarkImage:(id)a2 completion:(id /* block */)a3;
+ (void)acc_addWaterMarkForSourceImage:(id)a0 waterMarkImageName:(id)a1 completion:(id /* block */)a2;
+ (id)p_imageWithViewOnScreenScale:(id)a0;
+ (void)acc_addWaterMarkForSourceImage:(id)a0 waterMarkImage:(id)a1 completion:(id /* block */)a2;
+ (void)acc_addWaterMarkWithoutPaddingForSourceImage:(id)a0 waterMarkImage:(id)a1 completion:(id /* block */)a2;
+ (void)acc_addWaterMarkForSourceImage:(id)a0 completion:(id /* block */)a1;
+ (void)acc_addWatermarkForEffectSourceImage:(id)a0 userName:(id)a1 watermarkImage:(id)a2 shouldRemoveLabel:(BOOL)a3 completion:(id /* block */)a4;
+ (id)p_fullSizeImageWithSourceImageSize:(struct CGSize { double x0; double x1; })a0 waterMarkImage:(id)a1;

@end
