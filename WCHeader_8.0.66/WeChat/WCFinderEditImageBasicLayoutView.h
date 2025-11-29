@class WCFinderTemplateMusicSelectEntranceView;

@interface WCFinderEditImageBasicLayoutView : WCEditImageLayoutView

@property (nonatomic) BOOL hiddenCropBtn;
@property (retain, nonatomic) WCFinderTemplateMusicSelectEntranceView *musicEntranceView;

- (id)customBottomButtonOrder;
- (BOOL)shouldAutoTriggerMusic;
- (BOOL)canShowBGMBtn;
- (void)initPenToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadBottomEditImageBar;
- (void)addPatMusicInfoToBGMLogic;
- (void)startTextToolWithDisplayStr:(id)a0 lineColor:(id)a1 textStyle:(unsigned long long)a2;
- (id)roundCornersOnView:(id)a0 onTopLeft:(BOOL)a1 topRight:(BOOL)a2 bottomLeft:(BOOL)a3 bottomRight:(BOOL)a4 radius:(float)a5;
- (void)onfinderEditFrameBlurViewTap;
- (void)onClickDoneBtn:(id /* block */)a0;
- (void)reportClickDoneAction;
- (BOOL)shouldShowNewBGMPanel;
- (void).cxx_destruct;

@end
