@interface ACCPublishSaveLocalUtils : NSObject

+ (BOOL)enableToolBarAddShareForViewModel:(id)a0;
+ (BOOL)enableSaveLocalGuidePublishOptV2:(id)a0;
+ (BOOL)isImageAlbumAndDisableSaveImageAlbum:(id)a0;
+ (BOOL)p_musicCanSaveToAlbum:(id)a0;
+ (BOOL)multiProjects:(id)a0;
+ (BOOL)isImageAlbumAndEnableSaveAsVideo:(id)a0;
+ (BOOL)enableSaveLocalWithoutLoadingBlock:(id)a0;
+ (BOOL)p_isCanvansPhotoAndEnablePublishAsImageAlbum:(id)a0;
+ (unsigned long long)saveLocalGuideOptV2ABType:(id)a0;
+ (BOOL)disableSaveLocal:(id)a0 disableReason:(id *)a1;
+ (id /* block */)dataSyncWithOriginalPublishViewModel:(id)a0 editPageContext:(id)a1;
+ (BOOL)needShowChooseAlert:(id)a0;

@end
