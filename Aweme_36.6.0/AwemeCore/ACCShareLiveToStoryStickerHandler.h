@class AWEInteractionShareLiveToStoryStickerModel;
@protocol ACCShareLiveToStoryStickerDataProvider;

@interface ACCShareLiveToStoryStickerHandler : ACCStickerHandler

@property (retain, nonatomic) AWEInteractionShareLiveToStoryStickerModel *stickerModel;
@property (weak, nonatomic) id<ACCShareLiveToStoryStickerDataProvider> dataProvider;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (void)expressSticker:(id)a0;
- (void)postExpressStickerNotification;
- (void)addVEStickerWithInteractionModel:(id)a0 effectInfo:(id)a1;
- (void)onReceiveEditVCWillAppearNotification:(id)a0;
- (void)showLiveSticker;
- (void)addInteractionSticker:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (id)interactiveStickerGeometryWithCenterInPlayer:(struct CGPoint { double x0; double x1; })a0 interactiveBoundsSize:(struct CGSize { double x0; double x1; })a1 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 stickerView:(id)a3 currentScale:(double)a4;
- (void)notifyLiveStickerAdded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
