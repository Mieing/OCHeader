@class NSString, ACCImageAlbumItemFilterInfo, ACCImageAlbumItemCropInfo, ACCImageAlbumItemOriginalImageInfo, ACCImageAlbumItemHDRInfo, ACCImageAlbumItemStickerInfo, ACCImageAlbumItemEditImageInfo, ACCImageAlbumItemTemplateInfo, ACCImageAlbumImageMediaInfo;

@interface ACCImageAlbumItemModel : ACCImageAlbumItemBaseItemModel

@property (readonly, copy, nonatomic) NSString *itemIdentify;
@property (readonly, nonatomic) ACCImageAlbumItemOriginalImageInfo *originalImageInfo;
@property (readonly, nonatomic) ACCImageAlbumItemEditImageInfo *editImageInfo;
@property (readonly, nonatomic) ACCImageAlbumItemHDRInfo *HDRInfo;
@property (readonly, nonatomic) ACCImageAlbumItemFilterInfo *filterInfo;
@property (readonly, nonatomic) ACCImageAlbumItemStickerInfo *stickerInfo;
@property (readonly, nonatomic) ACCImageAlbumItemCropInfo *cropInfo;
@property (readonly, nonatomic) ACCImageAlbumItemTemplateInfo *imageTemplateInfo;
@property (retain, nonatomic) ACCImageAlbumImageMediaInfo *runtimeImageTrackInfo;
@property (retain, nonatomic) ACCImageAlbumImageMediaInfo *exportImageTrackInfo;
@property (nonatomic) double exportCompressionQuality;

- (BOOL)didAddEffectRenderInfo;
- (BOOL)didEffectRenderInfoChangedWithTarget:(id)a0;
- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)a0;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)a0 filePath:(id)a1;
- (id)initWithTaskId:(id)a0 index:(long long)a1 uuid:(id)a2;
- (void)resetItemIdentify:(id)a0;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;
- (void).cxx_destruct;

@end
