@class AWEVideoPublishViewModel, NSObject;
@protocol ACCDraftAutoSaveProtocol, ACCEditTagDataProvider;

@interface ACCEditTagStickerHandler : ACCStickerHandler

@property (weak, nonatomic) NSObject<ACCEditTagDataProvider> *dataProvider;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL isImageAlbum;
@property (copy, nonatomic) id /* block */ onEditTag;
@property (copy, nonatomic) id /* block */ onTagChangeDirection;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1 inContainerView:(id)a2;
- (BOOL)canRecoverImageAlbumStickerModel:(id)a0;
- (void)recoverStickerForContainer:(id)a0 imageAlbumStickerModel:(id)a1;
- (void)makeGeometrySafeWithTag:(id)a0 withNewCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)addEditTagInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (id)addTagWithModel:(id)a0 inContainerView:(id)a1 constructorBlock:(id /* block */)a2;
- (void)reverseTag:(id)a0;
- (unsigned long long)numberOfTags;
- (void).cxx_destruct;

@end
