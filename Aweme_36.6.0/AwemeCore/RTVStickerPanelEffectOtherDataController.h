@protocol RTVStickerPanelEffectOtherDataControllerDelegate;

@interface RTVStickerPanelEffectOtherDataController : RTVStickerPanelBaseDataController

@property (weak, nonatomic) id<RTVStickerPanelEffectOtherDataControllerDelegate> customDelegate;

- (id)tryToSelectStickerWithID:(id)a0;
- (id)cancelTryToSelectStickerIDPrevious:(id)a0;
- (id)tryToSelectSticker:(id)a0;
- (void)willSelectSticker:(id)a0;
- (id)createViewModelWithSticker:(id)a0;
- (id)shouldSelectSticker:(id)a0;
- (void).cxx_destruct;

@end
