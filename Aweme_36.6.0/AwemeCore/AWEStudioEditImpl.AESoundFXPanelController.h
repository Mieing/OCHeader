@interface AWEStudioEditImpl.AESoundFXPanelController : NSObject <DUXSheetDelegate, AESoundFXPanelControllerProtocol> {
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ cachedPanelViewController;
    void /* unknown type, empty encoding */ lastPanelTop;
    void /* unknown type, empty encoding */ lastSelectedValue;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (double)panelHeight;
- (void)showPanel:(id /* block */)a0;
- (void)showPanelWithTargetItem:(id)a0 targetTab:(id)a1 completion:(id /* block */)a2;
- (void)dismiss:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
