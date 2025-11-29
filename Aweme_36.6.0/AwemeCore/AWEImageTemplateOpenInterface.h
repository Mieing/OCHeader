@interface AWEImageTemplateOpenInterface : NSObject

+ (void)applyTemplateToImageWithOriginImagePath:(id)a0 templateID:(id)a1 resourcesDIYInfos:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
+ (void)predownloadTemplateResourcesWithTemplateID:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
+ (void)exportTemplateRenderImageWithOriginImagePath:(id)a0 templateID:(id)a1 ZIPFile:(id)a2 downloadedMediaResourcesCache:(id)a3 resourcesDIYInfos:(id)a4 downloadResourcesErrorType:(long long)a5 completion:(id /* block */)a6;
+ (void)mediaResourcesDownloadWith:(id)a0 completion:(id /* block */)a1;
+ (void)mediaResourcesDownloadWithTemplateID:(id)a0 completion:(id /* block */)a1;
+ (id)transferToNLEResourcesFrom:(id)a0;
+ (BOOL)ifSuccessfullyApplyTemplateInfoInFile:(id)a0 toNLEWrapper:(id)a1 withTemplateID:(id)a2;
+ (struct CGSize { double x0; double x1; })getContraintSizeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)updateDIYTemplateInfoForNLEImageWrapper:(id)a0 DIYInfos:(id)a1;
+ (void)updateTextLayerInfoWith:(id)a0 NLELayers:(id)a1;
+ (id)getNLEResourceFrom:(id)a0;
+ (void)applyTemplateToImageWithOriginImagePath:(id)a0 resourcesModel:(id)a1 resourcesDIYInfos:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
+ (void)predownloadTemplateResourcesWith:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
+ (id)errorWithDescription:(id)a0;

@end
