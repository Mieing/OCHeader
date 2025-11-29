@class NSHashTable;

@interface ACCImageAlbumEditStickerHandler : ACCStickerCompoundHandler

@property (readonly, nonatomic) NSHashTable *allStickerContainers;

- (void)removeAllInfoStickers;
- (void)setStickerContainerView:(id)a0;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1 inContainerView:(id)a2;
- (BOOL)canRecoverStickerStorageModel:(id)a0;
- (void)recoverStickerForContainer:(id)a0 storageModel:(id)a1;
- (BOOL)canRecoverImageAlbumStickerModel:(id)a0;
- (void)recoverStickerForContainer:(id)a0 imageAlbumStickerModel:(id)a1;
- (void)applyStickerStorageModel:(id)a0 forContainer:(id)a1 stickerIndex:(unsigned long long)a2 imageAlbumIndex:(unsigned long long)a3;
- (void).cxx_destruct;

@end
