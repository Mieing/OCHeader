@class NSArray, NSString;

@interface ACCImageAlbumData : MTLModel

@property (readonly, copy, nonatomic) NSArray *imageAlbumItems;
@property (readonly, copy, nonatomic) NSString *taskId;
@property (nonatomic, getter=isNLEEnable) BOOL enableNLE;

- (id)initWithImageAlbumInput:(id)a0 taskId:(id)a1;
- (void)removeImageAtIndex:(long long)a0;
- (void)updateLensHDRModelWithFilePath:(id)a0;
- (void)moveImageFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)replaceImageAtIndex:(long long)a0 withModel:(id)a1 imageAtIndex:(long long)a2;
- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)a0;
- (void)amazingDivideImageAlbumDataFromTargetImageIndex:(long long)a0;
- (long long)maxStickerUniqueId;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)a0 filePath:(id)a1;
- (id)initWithMaturerImageItems:(id)a0 taskId:(id)a1;
- (id)initForCopyWithTarget:(id)a0;
- (id)stickerWithUniqueId:(long long)a0 preferredImageIndex:(id)a1;
- (id)itemIdentifyAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeWith:(id)a0;
- (void)replaceWith:(id)a0;

@end
