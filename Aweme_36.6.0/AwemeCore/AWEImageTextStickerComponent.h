@interface AWEImageTextStickerComponent : AWEImageTextBaseComponent <AWEAwemeGestureProtocol, AWEImageTextVideoControllerDelegate, BDMultiContentContainer.OverlayViewDelegate, AWEImageTextLifeCycleProtocol, AWEImageTextStickerComponentProtocol> {
    void /* unknown type, empty encoding */ stickerManager;
    void /* unknown type, empty encoding */ globalBubbleContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerManagerDelegate;
    void /* unknown type, empty encoding */ perCellStickerManagers;
    void /* unknown type, empty encoding */ perCellStickerManagerDelegates;
}

+ (BOOL)shouldCreateWithManager:(id)a0;

- (BOOL)shouldResponsetoLongPress:(struct CGPoint { double x0; double x1; })a0;
- (void)playByClick:(BOOL)a0;
- (void)pauseByClick:(BOOL)a0;
- (void)createdVideoController:(id)a0;
- (void)prepareForPlayingIfNeeded;
- (void)overlayView:(id)a0 containerDidScrollTo:(struct CGPoint { double x0; double x1; })a1;
- (void)overlayView:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)overlayView:(id)a0 shouldResponseToTap:(struct CGPoint { double x0; double x1; })a1 from:(id)a2;
- (void)configOverlayView:(id)a0;
- (void)sectionControllerDidEndDisplaying:(id)a0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)didSetupPageContext;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)updateModernInteractiveContainerAtIndex:(long long)a0 uri:(id)a1 aweme:(id)a2 container:(id)a3;
- (id)getCurrentCellStickerManager;
- (void)updateOverlaysWithIndexes:(id)a0;
- (void)updateStickerPositionWithUri:(id)a0;
- (id)registerProtocol;
- (void).cxx_destruct;
- (id)init;
- (id)initWithManager:(id)a0;

@end
