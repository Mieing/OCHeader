@interface AWEFormatImpl.AWEFormatMusicSelectMusicVolumeSheet : DUXBasicSheet <DUXSheetDelegate> {
    void /* unknown type, empty encoding */ valChangeBlock;
    void /* unknown type, empty encoding */ clickCloseBtn;
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slider;
}

- (void)sheetDidClickMaskArea:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (id)initWithRootViewController:(id)a0 withTopType:(unsigned long long)a1 withHeight:(double)a2;
- (id)initWithRootViewController:(id)a0 withTopType:(unsigned long long)a1;
- (id)initWithRootViewController:(id)a0 withTopType:(unsigned long long)a1 enlargeType:(unsigned long long)a2;
- (id)initWithPanelView:(id)a0;
- (id)initWithPanelView:(id)a0 withTopTitle:(id)a1;
- (id)initWithPanelView:(id)a0 withTopTitle:(id)a1 withTopType:(unsigned long long)a2;
- (id)initWithPanelView:(id)a0 withTopTitle:(id)a1 withTopType:(unsigned long long)a2 withPanelTopView:(id)a3;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)closeButtonTapped;

@end
