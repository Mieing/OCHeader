@class NSString, ACCImageAlbumItemDraftResourceRestorableModel, NSArray;

@interface ACCImageAlbumItemTemplateInfo : ACCImageAlbumItemBaseItemModel

@property (copy, nonatomic) NSString *imageTemplateJsonInfo;
@property (retain, nonatomic) ACCImageAlbumItemDraftResourceRestorableModel *NLEImageEditOriginalImageInfo;
@property (copy, nonatomic) NSString *imageTemplateID;
@property (copy, nonatomic) NSArray *cachedTemplateInfos;
@property (copy, nonatomic) NSArray *templateStickerInfos;
@property (copy, nonatomic) NSString *mainLayerId;

- (BOOL)isTemplateTakeEffect;
- (BOOL)didInfosChangedWithTarget:(id)a0;
- (id)stickerTextList;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)a0 filePath:(id)a1;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;
- (void).cxx_destruct;

@end
