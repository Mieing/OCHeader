@class NSArray;

@interface ACCImageAlbumItemStickerInfo : ACCImageAlbumItemBaseItemModel

@property (copy, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSArray *interactionStickers;
@property (copy, nonatomic) NSArray *textStickers;
@property (nonatomic) struct CGSize { double width; double height; } mediaActualSize;

- (void)removeAllStickers;
- (id)stickerWithUniqueId:(long long)a0;
- (BOOL)didInfosChangedWithTarget:(id)a0;
- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)a0;
- (void)addStickerWithSticker:(id)a0;
- (void)addTextStickerWithTextSticker:(id)a0;
- (id)orderAscendingStickers;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;
- (BOOL)containStickerWithUniqueId:(long long)a0;
- (void)removeStickerWithUniqueId:(long long)a0;
- (void).cxx_destruct;
- (long long)maxOrder;

@end
