@class NSString;

@interface AWEImageAlbumWorkspaceAdapter : NSObject <AWEImageAlbumWorkspaceAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)adapterImageAlbumRepositoryIfNeed:(id)a0;
+ (id)transToVerticesWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)shouldUpgradeOldImageAlbumRepository:(id)a0;
+ (void)upgradeOldImageAlbumToWorkSpaceIfNeed:(id)a0;
+ (id)projectFromImageItemModel:(id)a0 oldPublishModel:(id)a1 workSpace:(id)a2 index:(long long)a3;
+ (void)covertImageItemModelFromImageItem:(id)a0 toProject:(id)a1;
+ (void)covertImageItemCropFromImageItem:(id)a0 toProject:(id)a1;
+ (void)covertImageItemHDRModelFromImageItem:(id)a0 toProject:(id)a1;
+ (void)covertImageItemFilterModelFromImageItem:(id)a0 toProject:(id)a1;
+ (void)covertImageItemStickerModelFromImageItem:(id)a0 toProject:(id)a1;
+ (struct CGSize { double x0; double x1; })getVideoPlayerSize;
+ (void)transferMultiProjects:(id)a0 toMainPublishModel:(id)a1;
+ (void)loadProjectsWithUUIDs:(id)a0 originWorkspace:(id)a1 draft:(id)a2 completion:(id /* block */)a3;
+ (id)imageInputInfoMakeWithImageFilePath:(id)a0 backupImageFilePath:(id)a1 taskId:(id)a2;
+ (void)covertImageItemModelFromProject:(id)a0 toImageItem:(id)a1 currentMaxUniqueId:(long long)a2;
+ (void)covertImageItemHDRModelFromProject:(id)a0 toImageItem:(id)a1;
+ (void)covertImageItemFilterModelFromProject:(id)a0 toImageItem:(id)a1;
+ (void)covertImageItemStickerModelFromProject:(id)a0 toImageItem:(id)a1 currentMaxUniqueId:(long long)a2;
+ (id)textStickerStorageModelFromVideoStciker:(id)a0;
+ (id)imageStickerModelFromVideoSticker:(id)a0 imageItemModel:(id)a1 project:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getImageStickerBoundBoxWithVideoSticker:(id)a0 imageLayerSize:(struct CGSize { double x0; double x1; })a1 videoData:(id)a2 stickerProps:(id)a3;
+ (void)degradeWorkSpaceToOldImageAlbumIfNeed:(id)a0 draft:(id)a1 completion:(id /* block */)a2;


@end
