@class NSString;

@interface AWEVideoPublishAsImageAlbumHelper : NSObject <ACCVideoPublishAsImageAlbumProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveOriginalImageWithImage:(id)a0 to:(id)a1 compressOrigin:(BOOL)a2 completion:(id /* block */)a3;
+ (BOOL)hasCanvasEdit:(id)a0;
+ (BOOL)isCanvansPhotoAndEnablePublishAsImageAlbum:(id)a0;
+ (BOOL)isCanvansPhotoAndEnableSaveAlbumAsImageAlbum:(id)a0;
+ (BOOL)isMergeImageForProject:(id)a0;
+ (BOOL)isSupportedCovertCanvansType:(id)a0;
+ (BOOL)isMergeImageForSaveAlbum:(id)a0 index:(long long)a1;
+ (BOOL)isCanvansPhotoAndEnablePublishAsImageAlbumWithoutDynamicCheck:(id)a0;
+ (void)saveOriginalImageWithAsset:(id)a0 to:(id)a1 completion:(id /* block */)a2;
+ (void)saveOriginalImageWithImage:(id)a0 to:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isMergeImageForPublish:(id)a0 index:(long long)a1;
+ (long long)mergeImageCountForPublish:(id)a0;
+ (long long)mergeVideoCountForPublish:(id)a0;
+ (BOOL)isPhotoPublishAsImageForSlides:(id)a0;
+ (BOOL)isPhotoSaveAsImageForSlides:(id)a0;
+ (BOOL)enableUsingOriginImagePublishWithModel:(id)a0;
+ (id)existingOriginalImageFilePathFromPublishModel:(id)a0;
+ (struct CGSize { double x0; double x1; })exportSizeForPHAsset:(id)a0;
+ (id)subscriberPool;
+ (void)sendOriginImageDidSaveMessageWithTaskId:(id)a0;
+ (BOOL)hasUnSupportedEditAbility:(id)a0;
+ (BOOL)hasFixedUnSupportedPublishConfig:(id)a0;
+ (BOOL)hasDynamicUnSupportedPublishConfig:(id)a0;
+ (BOOL)p_isCanvansPhotoAndEnableCheck:(id)a0 isForSaveAlbum:(BOOL)a1 ignoreDynamicCheck:(BOOL)a2;
+ (BOOL)p_hasUnSupportedEditAbility:(id)a0 isForSaveAlbum:(BOOL)a1;
+ (BOOL)p_isOnlyImageAlbumDuetProfileWithModel:(id)a0;
+ (BOOL)p_hasUnSupportedSticker:(id)a0 isForSaveAlbum:(BOOL)a1;
+ (BOOL)isSupportedInteractionStickers:(id)a0 publishModel:(id)a1;
+ (BOOL)hasDynamicSticker:(id)a0 sticker:(id)a1;
+ (BOOL)hasNewTextTemplateStickerWithPublishModel:(id)a0;
+ (id)p_preassembleOriginalImageModelInfoTo:(id)a0;
+ (void)p_saveOriginalImageWithImage:(id)a0 filePath:(id)a1 taskID:(id)a2 compressOrigin:(BOOL)a3 completion:(id /* block */)a4;
+ (BOOL)p_saveImageWithFilePath:(id)a0 imageData:(id)a1;
+ (id)p_compressedFramsImageFilePathFromOriginalFilePath:(id)a0;
+ (BOOL)isPhotoPublishAsImageForSlides:(id)a0 isForSaveAlbum:(BOOL)a1;
+ (long long)resizeMode;
+ (void)addSubscriber:(id)a0;
+ (void)removeSubscriber:(id)a0;


@end
