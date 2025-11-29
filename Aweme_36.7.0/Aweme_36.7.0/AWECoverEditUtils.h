@class NSString;

@interface AWECoverEditUtils : NSObject <AWECoverEditUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createNewProjectWithImage:(id)a0 filePath:(id)a1 index:(long long)a2 sourceModel:(id)a3 configCoverModel:(id /* block */)a4 completion:(id /* block */)a5;
+ (id)hotCategoryID;
+ (BOOL)coverImageTemplateRecEnabled;
+ (void)configCustomStickerWithCoverModel:(id)a0 originPublishViewModel:(id)a1 editService:(id)a2 coverImage:(id)a3 filePath:(id)a4 canConfigCoverData:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)updateResourceTagWithNleModel:(id)a0 nle:(id)a1 fileName:(id)a2;
+ (void)openCoverEditVCWithSourceImage:(id)a0 sourceFilePath:(id)a1 serviceProvider:(id)a2 workspace:(id)a3 configCoverModel:(id /* block */)a4 index:(long long)a5 activeNLE:(BOOL)a6 saveBlock:(id /* block */)a7 dismissBlock:(id /* block */)a8 cancelBlock:(id /* block */)a9 completion:(id /* block */)a10;
+ (void)getCoverSourceImageWithWorkspace:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
+ (void)createNewProjectGlobalThreadWithImage:(id)a0 filePath:(id)a1 index:(long long)a2 sourceModel:(id)a3 configCoverModel:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)replaceMainResource:(id)a0 resourceFilePath:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 templateModel:(id)a3;
+ (void)replaceMainResource:(id)a0 nle:(id)a1 resourceFilePath:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 enableClip:(BOOL)a4;
+ (id)coverNLEModelFileName;
+ (void)generateCoverWithSourceImage:(id)a0 filePath:(id)a1 publishModel:(id)a2 configCoverModel:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)coverResultFileName;
+ (id)getCoverSourceImageFilePath:(id)a0 index:(long long)a1;
+ (void)fetchCoverSourceImageWithWorkspace:(id)a0 index:(long long)a1 retryCount:(long long)a2 completion:(id /* block */)a3;
+ (void)mergeCoverImageWithWorkspace:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
+ (id)storeNLE:(id)a0;
+ (id)coverStickerTextListForPublishModel:(id)a0;
+ (BOOL)isCoverTextUseForPublishModel:(id)a0;
+ (void)openSelectCoverVCWithWorkspace:(id)a0 isCoverEdit:(BOOL)a1 serviceContainer:(id)a2 currentProjectUUID:(id)a3 didChooseCoverBlock:(id /* block */)a4;
+ (void)openCoverPreviewVCWithCoverImage:(id)a0 publishTitle:(id)a1 publishCaption:(id)a2 initialIndex:(long long)a3 delegate:(id)a4;
+ (void)openCoverEditVCWithServiceProvider:(id)a0 workspace:(id)a1 configCoverModel:(id /* block */)a2 index:(long long)a3 activeNLE:(BOOL)a4 saveBlock:(id /* block */)a5 dismissBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
+ (void)generateCoverWithPublishModel:(id)a0 configCoverModel:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)getCoverResultImageFromCache:(id)a0;
+ (BOOL)shouldUseNewSlidesCoverEdit:(id)a0;
+ (void)prefetchCoverImageTemplateForRepository:(id)a0 completion:(id /* block */)a1;


@end
