@interface AWEFormatImpl.FormatBotShareComponent : HTSService <DUXSheetDelegate, AWEFormatShareService> {
    void /* unknown type, empty encoding */ isInputing;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ panelOriginY;
}

- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)showPanelWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
